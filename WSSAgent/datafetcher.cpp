#include "datafetcher.h"
#include <QDebug>

DataFetcher::DataFetcher(QObject *parent) : QObject(parent)
{
    fetch_it();
    timer = new QTimer();
    timer->setInterval(15000);
    timer->start();

    connect(timer, SIGNAL(timeout()), this, SLOT(fetch_it()));
}

void DataFetcher::fetch_it()
{
    QString data;
    system("/bin/sysfetch | tr -d '\n' > /tmp/sysfetched");
    QFile inp("/tmp/sysfetched");
    if(inp.open(QIODevice::ReadOnly))
    {
        data = inp.readLine();
        inp.close();
    }
    else { emit fetcherror(); return; }
    if(!(data.at(0) == '#' && data.at(data.length()-1) == '#' && data.contains("$"))) { emit fetcherror(); return; }
    actualdata = data;
    qDebug() << actualdata;
}

QString DataFetcher::ret_all()
{
    return actualdata;
}
