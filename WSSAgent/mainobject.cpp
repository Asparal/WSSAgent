#include "mainobject.h"

mainobject::mainobject(QObject *parent) : QObject(parent)
{
    master = "";
    data = new DataFetcher();
    udpt = new socketUDP();
    tcpt = new socketTCP();

    connect(udpt, SIGNAL(serverfound(QString)), this, SLOT(set_master(QString)));
    connect(tcpt, SIGNAL(newrequest(QTcpSocket*)), this, SLOT(perform_slave(QTcpSocket*)));
    connect(tcpt, SIGNAL(newslave(QString)), this, SLOT(set_slave(QString)));
    connect(data, SIGNAL(fetcherror()), this, SLOT(error()));
}

void mainobject::set_master(QString m)
{
    if(master != m)
    {
        qDebug() << "New master : " << m;
        master = m;
        QByteArray tosend(crypt::enc("#x$newmaster#"));
        (new QUdpSocket())->writeDatagram(tosend, QHostAddress(m), (quint16)4442);
    }
}

void mainobject::perform_slave(QTcpSocket* sock)
{
    if(master == sock->peerAddress().toString())
    {
        QString rep = crypt::enc(data->ret_all().toLatin1());
        tcpt->sendtext(sock, rep);
    }
    else qDebug() << "Request from unknown not performed - " << sock->peerAddress().toString();
}

void mainobject::set_slave(QString s)
{
    slaveid = s;
}

void mainobject::error()
{
    qDebug() << "Probleme avec le script local";
}
