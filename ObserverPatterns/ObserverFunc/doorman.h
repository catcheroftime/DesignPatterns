#ifndef DOORMAN_H
#define DOORMAN_H

#include "commondefine.h"
#include <iostream>
#include <list>

#define UNUSED(x) (void)x;

using namespace std;

class DoorMan
{
public:
    void Attach(FUN_Notify func);
    void Detach(FUN_Notify func);
    void Notify();

    void modifyStatus(string status);

private:
    list<FUN_Notify> m_ObserverFuncList;
};

void DoorMan::Attach(FUN_Notify func)
{
    m_ObserverFuncList.push_back(func);
}

void DoorMan::Detach(FUN_Notify func)
{
    UNUSED(func);
//    m_ObserverFuncList.remove(func);
}

void DoorMan::Notify()
{
    std::list<FUN_Notify>::iterator it = m_ObserverFuncList.begin();
    while (it != m_ObserverFuncList.end())
    {
        (*it)();
        ++it;
    }
}

void DoorMan::modifyStatus(string status)
{
    if (status == "�ϰ�����") {
        std::cout << "�ϰ����ˣ��Ͻ�֪ͨ" << std::endl;
        Notify();
    }
    else
        std::cout << status <<", �����ϰ����ˣ�����֪ͨ��"<< std::endl;
}

#endif // DOORMAN_H
