#ifndef CONCRETEELEMENT_H
#define CONCRETEELEMENT_H

#include "element.h"

class CppDevEngineer : public Element{
public:
    CppDevEngineer(string name): Element(name) {}

};

class GoDevEngineer : public Element{
public:
    GoDevEngineer(string name): Element(name) {}

};

class PythonDevEngineer : public Element{
public:
    PythonDevEngineer(string name): Element(name) {}

};

#endif // CONCRETEELEMENT_H
