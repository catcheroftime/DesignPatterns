TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

HEADERS += \
    element.h \
    concreteelement.h \
    visitor.h \
    concretevisitor.h
