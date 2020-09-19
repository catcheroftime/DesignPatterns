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
    if (status == "老板来了") {
        std::cout << "老板来了，赶紧通知" << std::endl;
        Notify();
    }
    else
        std::cout << status <<", 不是老板来了，不用通知了"<< std::endl;
}

#endif // DOORMAN_H
