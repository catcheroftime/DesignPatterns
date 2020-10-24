#include <iostream>

#include "eagersingleton.h"
#include "lazysingletondemo.h"
#include "lazysingletonmore.h"
#include "singleton.h"


using namespace std;

int main()
{
    LazySingletonDemo::getInstance();
    LazySingletonMore::getInstance();
    Singleton::getInstance();

    return 0;
}
