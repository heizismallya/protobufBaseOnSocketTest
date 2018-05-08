#include "qmytcpclient.h"

QMyTcpClient::QMyTcpClient(QObject *parent) : QObject(parent)
{
    m_client = NULL;
}

QMyTcpClient::~QMyTcpClient()
{
    if (m_client != NULL)
    {
        delete m_client;
    }
}

void QMyTcpClient::connect(QHostAddress ipaddr, int port)
{
    if (m_client != NULL)
    {
        delete m_client;
        m_client = NULL;
    }

    m_client = new QTcpSocket(this);
    m_client->connectToHost(ipaddr, port);

}

void QMyTcpClient::send(char *buf, int len)
{
    m_client->write(buf, len);
}
