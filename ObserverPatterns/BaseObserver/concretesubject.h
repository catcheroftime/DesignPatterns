#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "abstractclass.h"
#include <iostream>
#include <list>

using namespace std;

class ConcreteSubject : public Subject
{
public:
    void Attach(Observer *pObserver);
    void Detach(Observer *pObserver);
    void Notify();

    void modifyStatus(string status);

private:
    std::list<Observer *> m_ObserverList;
};

void ConcreteSubject::Attach(Observer *pObserver)
{
    m_ObserverList.push_back(pObserver);
}

void ConcreteSubject::Detach(Observer *pObserver)
{
    m_ObserverList.remove(pObserver);
}

void ConcreteSubject::Notify()
{
    std::list<Observer *>::iterator it = m_ObserverList.begin();
    while (it != m_ObserverList.end())
    {
        (*it)->Update();
        ++it;
    }
}

void ConcreteSubject::modifyStatus(string status)
{
    if (status == "老板来了") {
        std::cout << "老板来了，赶紧通知" << std::endl;
        Notify();
    }
    else
        std::cout << status <<", 不是老板来了，不用通知了"<< std::endl;
}

#endif // CONCRETESUBJECT_H
