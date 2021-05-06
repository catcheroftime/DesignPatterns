#ifndef CONCRETEVISITOR_H
#define CONCRETEVISITOR_H

#include "visitor.h"
#include "concreteelement.h"
#include <iostream>

using namespace std;

class ProjectA : public Visitor {
    virtual void ArrangeCPP(CppDevEngineer *element) {
        cout << element->getName() << ", ProjectA 需要你做后端开发" << endl;
    }

    virtual void ArrangeGo(GoDevEngineer *element) {
        cout << element->getName() << ", ProjectA 需要你做算法开发" << endl;
    }

    virtual void ArrangePython(PythonDevEngineer *element) {
        cout << element->getName() << ", ProjectA 需要你自动化测试" << endl;
    }
};


class ProjectB : public Visitor {
    virtual void ArrangeCPP(CppDevEngineer *element) {
        cout << element->getName() << ", ProjectB 暂时不需要C++开发工程师开发" << endl;
    }

    virtual void ArrangeGo(GoDevEngineer *element) {
        cout << element->getName() << ", ProjectB 需要你做后端开发" << endl;
    }

    virtual void ArrangePython(PythonDevEngineer *element) {
        cout << element->getName() << ", ProjectB 需要你做前端开发" << endl;
    }
};




#endif // CONCRETEVISITOR_H
