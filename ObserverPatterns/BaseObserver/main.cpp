#include "concreteobserver.h"
#include "concretesubject.h"

int main()
{
    ConcreteSubject doorman{};

    ConcreteObserverA employeeA{};
    ConcreteObserverB employeeB{};

    doorman.Attach(&employeeA);
    doorman.Attach(&employeeB);

    doorman.modifyStatus("С�ųٵ���");
    doorman.modifyStatus("�ϰ�����");

    return 0;
}
