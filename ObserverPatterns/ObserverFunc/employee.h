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
        std::cout << "��ֱ���ģ���æ�ر���ֱ������" << std::endl;
    }

};

class EmployeeB
{
public:
    EmployeeB(){}

    void PutdownPhone()
    {
        std::cout << "���ֻ��ģ����������ϵ��ֻ�" << std::endl;
    }
};

#endif // EMPLOYEE_H
