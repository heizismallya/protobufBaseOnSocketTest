#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <string>

#include <config.pb.h>

#include "qmytcpserver.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
/*
    config::VoiceConfig vc;

    QString ipaddr="192.168.0.136";

    std::string s = ipaddr.toStdString();

    vc.set_sample_rate(32000);
    vc.set_allocated_voiceserver_address(&s);
    vc.set_wakeup_sensitivity(50);
    vc.set_bargein_sensitivity(50);
    vc.set_audo_outtype(1);

    std::string sdata="";
    vc.SerializeToString(&sdata);

    qDebug()<<"size:"<<sdata.size();

    config::VoiceConfig de;
    de.ParseFromString(sdata);
    qDebug()<<"sample_rate:"<<de.sample_rate();
    qDebug()<<"address:"<<QString::fromStdString(de.voiceserver_address());
    qDebug()<<"wakeup_sensitivity:"<<de.wakeup_sensitivity();
*/

    QMyTcpServer myTcpServer;
    myTcpServer.listen(6665);

    return a.exec();
}
