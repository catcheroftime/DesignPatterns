TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

HEADERS += \
    abstractclass.h \
    concreteobserver.h \
    concretesubject.h
