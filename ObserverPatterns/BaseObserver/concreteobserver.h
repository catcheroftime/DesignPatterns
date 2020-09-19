#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include "abstractclass.h"
#include <iostream>

using namespace std;

class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA(){}

    void Update()
    {
        std::cout << "��ֱ���ģ���æ�ر���ֱ������" << std::endl;
    }

};

class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(){}

    void Update()
    {
        std::cout << "���ֻ��ģ����������ϵ��ֻ�" << std::endl;
    }
};

#endif // CONCRETEOBSERVER_H
