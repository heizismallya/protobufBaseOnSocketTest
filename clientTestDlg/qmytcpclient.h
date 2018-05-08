#ifndef QMYTCPCLIENT_H
#define QMYTCPCLIENT_H

#include <QObject>
#include <QtNetwork>

class QMyTcpClient : public QObject
{
    Q_OBJECT
public:
    explicit QMyTcpClient(QObject *parent = nullptr);
    ~QMyTcpClient();

    void connect(QHostAddress ipaddr, int port);
    void send(char *buf, int len);

signals:

public slots:

private:
    QTcpSocket *m_client;
};

#endif // QMYTCPCLIENT_H
