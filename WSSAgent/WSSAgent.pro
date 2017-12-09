QT += core
QT -= gui
QT += network

CONFIG += c++11

TARGET = WSSAgent
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    datafetcher.cpp \
    mainobject.cpp \
    socketudp.cpp \
    sockettcp.cpp \
    crypt.cpp \
    serveur.cpp

HEADERS += \
    datafetcher.h \
    mainobject.h \
    socketudp.h \
    sockettcp.h \
    crypt.h \
    serveur.h
