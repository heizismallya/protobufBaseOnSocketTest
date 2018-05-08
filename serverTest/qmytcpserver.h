#ifndef QMYTCPSERVER_H
#define QMYTCPSERVER_H

#include <QObject>
#include <QtNetwork>

class QMyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit QMyTcpServer(QObject *parent = nullptr);
    ~QMyTcpServer();

    void listen(int port);

signals:

public slots:
    void acceptConnection();
    void readClient();

private:
    QTcpServer *m_server;
    QTcpSocket  *m_clientConnection;
};

#endif // QTCPSERVER_H
