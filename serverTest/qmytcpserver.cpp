#include "qmytcpserver.h"

QMyTcpServer::QMyTcpServer(QObject *parent) : QObject(parent)
{
    this->m_server = NULL;
    this->m_clientConnection = NULL;
}

QMyTcpServer::~QMyTcpServer()
{
    if (m_server != NULL)
    {
        delete m_server;
    }

    if (m_clientConnection != NULL)
    {
        delete m_clientConnection;
    }
}

void QMyTcpServer::listen(int port)
{
    qDebug()<< "QMyTcpServer::listen() called!" << port;

    if (m_server != NULL)
    {
        delete m_server;
        m_server = NULL;
    }

    m_server = new QTcpServer();
    m_server->listen(QHostAddress::Any, port);
    connect(m_server, SIGNAL(newConnection()), this, SLOT(acceptConnection()));
}

void QMyTcpServer::acceptConnection()
{
    qDebug() << "QMyTcpServer::acceptConnection() called!";

    m_clientConnection = m_server->nextPendingConnection();
    connect(m_clientConnection, SIGNAL(readyRead()), this, SLOT(readClient()));
}

void QMyTcpServer::readClient()
{
    qDebug() << "QMyTcpServer::readClient() called!";

    QString str = m_clientConnection->readAll();

    qDebug() << "data read: " << str;


    if (str[0] == '5')
    {
        qApp->exit(0);
    }
    //或者
//    qApp->exit(0);
//    char buf[1024];
//    m_clientConnection->read(buf,1024);
}
