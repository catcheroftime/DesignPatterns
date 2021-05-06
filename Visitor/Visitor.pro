TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    element.cpp \
    visitor.cpp

HEADERS += \
    element.h \
    concreteelement.h \
    visitor.h
