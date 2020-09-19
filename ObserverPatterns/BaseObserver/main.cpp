#include "concreteobserver.h"
#include "concretesubject.h"

int main()
{
    ConcreteSubject doorman{};

    ConcreteObserverA employeeA{};
    ConcreteObserverB employeeB{};

    doorman.Attach(&employeeA);
    doorman.Attach(&employeeB);

    doorman.modifyStatus("小张迟到了");
    doorman.modifyStatus("老板来了");

    return 0;
}
