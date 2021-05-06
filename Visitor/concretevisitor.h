#ifndef CONCRETEVISITOR_H
#define CONCRETEVISITOR_H

#include "visitor.h"
#include "concreteelement.h"
#include <iostream>

using namespace std;

class ProjectA : public Visitor {
public:
    virtual void AssignedTasks(CppDevEngineer *element) {
        cout << element->getName() << ", ProjectA ��Ҫ������˿���" << endl;
    }

    virtual void AssignedTasks(GoDevEngineer *element) {
        cout << element->getName() << ", ProjectA ��Ҫ�����㷨����" << endl;
    }

    virtual void AssignedTasks(PythonDevEngineer *element) {
        cout << element->getName() << ", ProjectA ��Ҫ���Զ�������" << endl;
    }
};


class ProjectB : public Visitor {
public:
    virtual void AssignedTasks(CppDevEngineer *element) {
        cout << element->getName() << ", ProjectB ��ʱ����ҪC++��������ʦ����" << endl;
    }

    virtual void AssignedTasks(GoDevEngineer *element) {
        cout << element->getName() << ", ProjectB ��Ҫ������˿���" << endl;
    }

    virtual void AssignedTasks(PythonDevEngineer *element) {
        cout << element->getName() << ", ProjectB ��Ҫ����ǰ�˿���" << endl;
    }
};

#endif // CONCRETEVISITOR_H
