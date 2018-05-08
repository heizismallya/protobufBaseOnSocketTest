#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "qmytcpclient.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_myTcpClient = NULL;
}

MainWindow::~MainWindow()
{
    delete ui;

    if (m_myTcpClient != NULL)
    {
        delete m_myTcpClient;
    }
}

void MainWindow::on_pushButton1_clicked()
{
    if (m_myTcpClient != NULL)
    {
        delete m_myTcpClient;
        m_myTcpClient = NULL;
    }

    m_myTcpClient = new QMyTcpClient();
    m_myTcpClient->connect(QHostAddress("127.0.0.1"), 6665);
}

void MainWindow::on_pushButton2_clicked()
{
    m_myTcpClient->send("1", 1);
    m_myTcpClient->send("2", 1);
    m_myTcpClient->send("3", 1);
    m_myTcpClient->send("4", 1);
}

void MainWindow::on_pushButton3_clicked()
{
    m_myTcpClient->send("5", 1);
}
