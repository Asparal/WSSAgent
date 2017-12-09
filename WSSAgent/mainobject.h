#ifndef MAINOBJECT_H
#define MAINOBJECT_H

#include "crypt.h"
#include "datafetcher.h"
#include "sockettcp.h"
#include "socketudp.h"
#include <QUdpSocket>
#include <QFileInfo>

class mainobject : public QObject
{
    Q_OBJECT
public:
    explicit mainobject(QObject *parent = 0);
    ~mainobject();

signals:

private:
    DataFetcher* data;
    socketUDP* udpt;
    socketTCP* tcpt;
    QString master;
    QString slaveid;

    QString slave();

private slots:
    void set_master(QString m);
    void set_slave(QString s);
    void perform_slave(QTcpSocket* sock);
    void error();
    void reloaded(QString s);
};

#endif // MAINOBJECT_H
