#include "command.h"

int main()
{
//    Receiver r;
//    ConcreteCommand1 command1{r};
//    ConcreteCommand2 command2{r};

//    Invoker invoker;
//    invoker.setCommand(&command1);
//    invoker.setCommand(&command2);

//    invoker.ExecuteCommand();

    Receiver r;
    SimpleCommand<Receiver> aCommand (r, &Receiver::Action1);
    Invoker invoker;
    invoker.setCommand(&aCommand);

    invoker.ExecuteCommand();


}
