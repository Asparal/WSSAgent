#ifndef DATAFETCHER_H
#define DATAFETCHER_H

#include <QObject>
#include <stdlib.h>
#include <QTimer>
#include <QFile>

class DataFetcher : public QObject
{
    Q_OBJECT
public:
    explicit DataFetcher(QObject *parent = 0);
    QString ret_all();
    QString actualdata;
    QTimer* timer;

signals:
    void fetcherror();

private slots:
    void fetch_it();
};

#endif // DATAFETCHER_H
