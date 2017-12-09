#ifndef SOCKETUDP_H
#define SOCKETUDP_H

#include <QObject>
#include <QUdpSocket>
#include "crypt.h"

class socketUDP : public QObject
{
    Q_OBJECT
public:
    explicit socketUDP(QObject *parent = 0);

signals:
    void serverfound(QString server);

private:
    QUdpSocket* udpsocket;

private slots:
    void udpreceive();
};

#endif // SOCKETUDP_H
