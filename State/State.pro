TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    state.cpp \
    context.cpp

HEADERS += \
    state.h \
    context.h \
    concretestate.h
