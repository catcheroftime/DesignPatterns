#include "concretemediator.h"

int main()
{
    ConcreteMediator mediator;

    mediator.clickButton1();
    mediator.clickButton1();
    mediator.clickButton1();
    mediator.showLineEditInfo();

    mediator.clickButton2();
    mediator.clickButton2();
    mediator.clickButton2();
    mediator.clickButton2();
    mediator.showLineEditInfo();

    return 0;
}
