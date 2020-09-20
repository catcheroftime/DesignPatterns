#include "boss.h"
#include "doorman.h"
#include "concreteobserver.h"

int main()
{
    DoorMan doorman{};

    ConcreteObserverA employeeA{&doorman};
    ConcreteObserverB employeeB{&doorman};

    Boss boss{&doorman};

    boss.comeCompany();
    boss.leaveCompany();

    return 0;
}
