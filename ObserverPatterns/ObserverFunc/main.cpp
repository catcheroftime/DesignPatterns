#include "doorman.h"
#include "employee.h"

int main()
{
    DoorMan doorman{};

    EmployeeA employeeA{};
    EmployeeB employeeB{};

    auto closepriview = std::bind(&EmployeeA::ClosePriview, employeeA);
    auto putdownphone = std::bind(&EmployeeB ::PutdownPhone, employeeB);

    doorman.Attach(closepriview);
    doorman.Attach(putdownphone);


    doorman.modifyStatus("小张迟到了");
    doorman.modifyStatus("老板来了");

    return 0;
}
