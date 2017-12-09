#include "socketudp.h"

socketUDP::socketUDP(QObject *parent) : QObject(parent)
{
    udpsocket = new QUdpSocket();
    udpsocket->bind(QHostAddress::Any, 4441);

    connect(udpsocket, SIGNAL(readyRead()), this, SLOT(udpreceive()));
}

void socketUDP::udpreceive()
{
    QByteArray buffer;
    buffer.resize(udpsocket->pendingDatagramSize());

    QHostAddress sender;
    quint16 senderport;

    udpsocket->readDatagram(buffer.data(), buffer.size(), &sender, &senderport);
    QString data = QString(crypt::dec(buffer));
    if(data != "")
    {
        if(data.at(0) == '#' && data.at(data.length()-1) == '#')
        {
            data = data.left(data.length()-1);
            data = data.right(data.length()-1);
            QStringList list = data.split("$");
            if(list.at(0) == "444")
            {
                if(list.at(1) == "Beacon") emit serverfound(sender.toString());
                else if(list.at(1) == "Firstatt") emit firstatt(sender.toString());
                else qDebug() << "Erreur - Data chelou : " << data;
            }
            else qDebug() << "Erreur - Sender chelou : " << data;
        }
        else qDebug() << "Erreur - Reception chelou : " << data;
    }
    else qDebug() << "donnee de merde...";
}
