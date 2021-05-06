#ifndef CONCRETEELEMENT_H
#define CONCRETEELEMENT_H

#include "element.h"
#include "visitor.h"

#include <iostream>
using namespace std;

class CppDevEngineer : public Element{
public:
    CppDevEngineer(string name): Element(name) {}

    virtual void accept(Visitor *visitor) {
        cout << "���� C++ �������ʦ" << endl;
        visitor->AssignedTasks(this);
    }
};

class GoDevEngineer : public Element{
public:
    GoDevEngineer(string name): Element(name) {}
    virtual void accept(Visitor *visitor) {
        cout << "���� Go �������ʦ" << endl;
        visitor->AssignedTasks(this);
    }
};

class PythonDevEngineer : public Element{
public:
    PythonDevEngineer(string name): Element(name) {}
    virtual void accept(Visitor *visitor) {
        cout << "���� Python �������ʦ" << endl;
        visitor->AssignedTasks(this);
    }
};

#endif // CONCRETEELEMENT_H
