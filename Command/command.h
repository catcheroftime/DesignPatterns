#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <list>

using namespace std;

class Receiver{
public:
    void Action1() {
        std::cout << "Action1 执行请求！" << std::endl;
    }

    void Action2() {
        std::cout << "Action2 执行请求！" << std::endl;
    }
};



class Command{
public:
    Command(Receiver receiver) : m_receiver(receiver) {}
    ~Command() {}

    virtual void Execute() = 0;

protected:
    Receiver m_receiver;
};

class ConcreteCommand1 : public Command {
public:
    ConcreteCommand1(Receiver receiver) : Command(receiver) {}

    virtual void Execute() { m_receiver.Action1(); }
};

class ConcreteCommand2 : public Command {
public:
    ConcreteCommand2(Receiver receiver) : Command(receiver) {}

    virtual void Execute() { m_receiver.Action2(); }
};

class Invoker {
public:
    void setCommand(Command *command) {
        m_commandList.push_back( command );
    }

    void ExecuteCommand() {
        for ( auto command : m_commandList)
            command->Execute();
    }

private:
    list<Command *> m_commandList;
};

template <class Receiver>
class SimpleCommand :public Command {
public:
    typedef void (Receiver::* Action) ();

    SimpleCommand (Receiver r, Action a) :  Command(r), m_action(a) {
    }

    virtual void Execute() {
          (m_receiver.*m_action) ();
    }

private:
    Action m_action;
};



#endif // COMMAND_H
