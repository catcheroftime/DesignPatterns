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
        std::cout << "看直播的，赶忙关闭了直播界面" << std::endl;
    }

};

class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(DoorMan *doorman){ doorman->Attach(this);}

    void Update()
    {
        std::cout << "玩手机的，放下了手上的手机" << std::endl;
    }
};


#endif // CONCRETEOBSERVER_H
