#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QPixmap>
#include<QDebug>
#include<QTcpServer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置窗口标题并加载资源图片
    this->setWindowTitle("Service");
    this->setWindowIcon(QIcon(":/image/QQ.png"));

    //重构画家事件，构建窗口背景见下方函数 paintEvent事件

    //禁止掉发送按钮
    ui->Send_Btn->setDisabled(true);

    //设置状态栏状态
    m_status=new QLabel;
    m_status->setPixmap(QPixmap(":/image/disconnect.png").scaled(20,20));
    ui->statusbar->addWidget(new QLabel("当前连接状态:"));
    ui->statusbar->addWidget(m_status);


    //开启服务器网络,创建服务器监听对象
    QTcpServer* listen=new QTcpServer(this);
    //获取套接字
    m_service=new QTcpSocket;

    //设置启动按钮监听事件，开始进行监听
    connect(ui->Start_Btn,&QPushButton::clicked,[=](){
        //获取Port中的端口值
        unsigned short port=ui->Port->text().toUShort();
        qDebug()<<port;
        //设置监听端口,服务器的IP地址
        listen->listen(QHostAddress::Any,port);//设置为本机的IP地址


        //开始进行监听
        connect(listen,&QTcpServer::newConnection,[=](){
            //禁止掉启动服务按钮
            ui->Send_Btn->setDisabled(true);

            //表示有人连接，改变状态栏
            m_status->setPixmap(QPixmap(":/image/connect.png").scaled(20,20));

            //使能发送按钮
            ui->Send_Btn->setDisabled(false);

            //实例化一个套接字用于通信
            m_service=listen->nextPendingConnection();

            //监听是否有数据传输过来
            connect(m_service,&QTcpSocket::readyRead,[=](){
                QByteArray array=m_service->readAll();//全部读取
                ui->Recording_Text->append("Client:"+array);
            });

            //监听服务器数据发送
            connect(ui->Send_Btn,&QPushButton::clicked,[=](){
                QString message=ui->Send_Text->toPlainText();
                m_service->write(message.toUtf8());//转换为UTF-8形式
                ui->Recording_Text->append("Service:"+message);
                ui->Send_Text->clear();
            });

            //监听客户端是否已经断开连接
            connect(m_service,&QTcpSocket::disconnected,[=](){
                m_service->close();//关闭套接字
                m_service->deleteLater();//等待一定事件释放
                m_status->setPixmap(QPixmap(":/image/disconnect.png").scaled(20,20));
                ui->Send_Btn->setDisabled(true);
                ui->Start_Btn->setDisabled(false);
            });
        });

    });





}

void MainWindow::paintEvent(QPaintEvent *)
{
    //申请一个画家，在当前窗口进行画画
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/image/qtui.png");
    //画画
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

