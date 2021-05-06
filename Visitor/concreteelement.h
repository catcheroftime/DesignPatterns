#ifndef CONCRETEELEMENT_H
#define CONCRETEELEMENT_H

#include "element.h"
#include "visitor.h"

class CppDevEngineer : public Element{
public:
    CppDevEngineer(string name): Element(name) {}

    virtual void accept(Visitor *visitor) {
        visitor->ArrangeCPP(this);
    }
};

class GoDevEngineer : public Element{
public:
    GoDevEngineer(string name): Element(name) {}
    virtual void accept(Visitor *visitor) {
        visitor->ArrangeGo(this);
    }
};

class PythonDevEngineer : public Element{
public:
    PythonDevEngineer(string name): Element(name) {}
    virtual void accept(Visitor *visitor) {
        visitor->ArrangePython(this);
    }
};

#endif // CONCRETEELEMENT_H
