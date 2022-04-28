#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QPainter>
#include<QTcpServer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置标题
    this->setWindowTitle("Client");
    this->setWindowIcon(QIcon(":/image/QQ.png"));
    //禁止掉发送按钮
    ui->Send_Btn->setDisabled(true);
    //禁止掉断开连接按钮
    ui->Disconnect_Btn->setDisabled(true);

    //设置状态栏为未连接状态
    m_status=new QLabel;
    m_status->setPixmap(QPixmap(":/image/disconnect.png").scaled(20,20));
    ui->statusbar->addWidget(new QLabel("当前连接状态:"));
    ui->statusbar->addWidget(m_status);

    //设置画家事件，设置窗口的背景见函数paintEvent

    //获取连接对象
    m_client=new QTcpSocket(this);

    //监听断开连接函数
    connect(ui->Disconnect_Btn,&QPushButton::clicked,[=](){
        m_client->close();
        ui->Disconnect_Btn->setDisabled(true);
        ui->Start_Btn->setDisabled(false);
        ui->Send_Btn->setDisabled(true);
        m_status->setPixmap(QPixmap(":/image/disconnect.png").scaled(20,20));
    });


    //监听开始连接函数
    connect(ui->Start_Btn,&QPushButton::clicked,[=](){

        //获取IP值和端口号的值
        unsigned short port=ui->Port->text().toUShort();
        QString ip=ui->IP->text();
        //开始连接
        m_client->connectToHost(QHostAddress(ip),port);
        ui->Send_Btn->setDisabled(false);
        //断开连接
        ui->Disconnect_Btn->setDisabled(false);
        ui->Start_Btn->setDisabled(true);
        m_status->setPixmap(QPixmap(":/image/connect.png").scaled(20,20));
        //进行读数据

        connect(m_client,&QTcpSocket::readyRead,[=](){
            QByteArray array=m_client->readAll();
            ui->Recording_Text->append("Service:"+array);
        });


        //发送数据
        connect(ui->Send_Btn,&QPushButton::clicked,[=](){
            QString message=ui->Send_Text->toPlainText();
            m_client->write(message.toUtf8());
            ui->Recording_Text->append("Client:"+message);
            ui->Send_Text->clear();
        });
    });

}


void MainWindow::paintEvent(QPaintEvent *)
 {
    QPainter painter(this);

    QPixmap pix;
    pix.load(":/image/qtui.png");

    painter.drawPixmap(0,0,this->width(),this->height(),pix);
 }
MainWindow::~MainWindow()
{
    delete ui;
}

