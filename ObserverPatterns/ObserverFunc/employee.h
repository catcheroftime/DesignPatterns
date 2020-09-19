#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "commondefine.h"
#include <iostream>

using namespace std;

class EmployeeA
{
public:
    EmployeeA(){}

    void ClosePriview()
    {
        std::cout << "看直播的，赶忙关闭了直播界面" << std::endl;
    }

};

class EmployeeB
{
public:
    EmployeeB(){}

    void PutdownPhone()
    {
        std::cout << "玩手机的，放下了手上的手机" << std::endl;
    }
};

#endif // EMPLOYEE_H
