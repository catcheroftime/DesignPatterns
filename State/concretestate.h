#ifndef CONCRETESTATE_H
#define CONCRETESTATE_H

#include "state.h"
#include <iostream>
using namespace std;

class RedState : public State
{
private:
    int doSomething() {
        cout << "RedLight ";
        return 30;
    }
};

class GreenState : public State
{
private:
    int doSomething() {
        cout << "GreenLight ";
        return 20;
    }
};

class YellowState : public State
{
private:
    int doSomething() {
        cout << "YellowLight ";
        return 3;
    }
};

#endif // CONCRETESTATE_H
