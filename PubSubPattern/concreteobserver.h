#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include "abstractclass.h"
#include "doorman.h"
#include <iostream>

using namespace std;

class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA(DoorMan *doorman){ doorman->Attach(this);}

    void Update()
    {
        std::cout << "��ֱ���ģ���æ�ر���ֱ������" << std::endl;
    }

};

class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(DoorMan *doorman){ doorman->Attach(this);}

    void Update()
    {
        std::cout << "���ֻ��ģ����������ϵ��ֻ�" << std::endl;
    }
};


#endif // CONCRETEOBSERVER_H
