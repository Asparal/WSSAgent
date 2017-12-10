#include "mainobject.h"

mainobject::mainobject(QObject *parent) : QObject(parent)
{
    master = "";
    udpt = new socketUDP();
    tcpt = new socketTCP();

    connect(udpt, SIGNAL(serverfound(QString)), this, SLOT(set_master(QString)));
    connect(udpt, SIGNAL(firstatt(QString)), this, SLOT(reloaded(QString)));
    connect(tcpt, SIGNAL(newrequest(QTcpSocket*)), this, SLOT(perform_slave(QTcpSocket*)));
    connect(tcpt, SIGNAL(newslave(QString)), this, SLOT(set_slave(QString)));
}

mainobject::~mainobject()
{
    (new QUdpSocket())->writeDatagram(crypt::enc("#" + this->slave().toLatin1() + "$Disconnected"), QHostAddress(master), 4442);
}

void mainobject::set_master(QString m)
{
    if(master != m)
    {
        qDebug() << "New master : " << m;
        master = m;
        QByteArray tosend;
        if(this->slave() != "absent") tosend = crypt::enc("#" + this->slave().toLatin1() +"$newmaster#");
        else tosend = crypt::enc("#x$newmaster#");
        (new QUdpSocket())->writeDatagram(tosend, QHostAddress(m), (quint16)4442);
    }
}

void mainobject::perform_slave(QTcpSocket* sock)
{
    if(master == sock->peerAddress().toString())
    {
        QString rep = QString(crypt::enc(data->ret_all().toLatin1()));
	qDebug() << "Rep : " << rep;
        tcpt->sendtext(sock, rep);
    }
    else qDebug() << "Request from unknown not performed - " << sock->peerAddress().toString();
}

void mainobject::set_slave(QString s)
{
    slaveid = s;
    system("echo " + slaveid.toLatin1() + " > /var/SlaveID");
    data = new DataFetcher();
    connect(data, SIGNAL(fetcherror()), this, SLOT(error()));
}

void mainobject::error()
{
    qDebug() << "Probleme avec le script local";
}

QString mainobject::slave()
{
    QString d;
    if(QFileInfo("/var/SlaveID").exists())
    {
        QFile f("/var/SlaveID");
        if(f.open(QIODevice::ReadOnly))
        {
            d = f.readLine();
            f.close();
            return d;
        }
        else return "absent";
    }
    else return "absent";
}

void mainobject::reloaded(QString s)
{
    master = "";
    this->set_master(s);
}
