#ifndef DOORMAN_H
#define DOORMAN_H

#include "abstractclass.h"
#include <iostream>
#include <list>

using namespace std;

class DoorMan
{
public:
    void Attach(Observer *pObserver);
    void Detach(Observer *pObserver);

    void Publish(string info);

private:
    void Notify();

private:
    std::list<Observer *> m_ObserverList;
};

void DoorMan::Attach(Observer *pObserver)
{
    m_ObserverList.push_back(pObserver);
}

void DoorMan::Detach(Observer *pObserver)
{
    m_ObserverList.remove(pObserver);
}

void DoorMan::Notify()
{
    std::list<Observer *>::iterator it = m_ObserverList.begin();
    while (it != m_ObserverList.end())
    {
        (*it)->Update();
        ++it;
    }
}

void DoorMan::Publish(string info)
{
    if (info == "�ϰ�����") {
        std::cout << "�ϰ����ˣ��Ͻ�֪ͨ" << std::endl;
        Notify();
    }
    else
        std::cout << info <<", �����ϰ����ˣ�����֪ͨ��"<< std::endl;
}

#endif // DOORMAN_H
