#ifndef CONCRETECOLLEAGUE_H
#define CONCRETECOLLEAGUE_H

#include "widget.h"
#include <string>
using namespace std;

class Button : public Widget {
public:
    Button(Mediator *mediator, string showinfo) : Widget(mediator), m_showinfo(showinfo) {}

    void setShowInfo(string info) { m_showinfo = info;}
    string getShowInfo() { return m_showinfo;}

private:
    string m_showinfo;
};

class LineEdit : public Widget {
public:
    LineEdit(Mediator *mediator) : Widget(mediator), m_showinfo(""){}

    void setShowInfo(string info) { m_showinfo = info;}
    string getShowInfo() { return m_showinfo;}

private:
    string m_showinfo;
};

#endif // CONCRETECOLLEAGUE_H
