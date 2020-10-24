#ifndef LAZYSINGLETONDEMO_H
#define LAZYSINGLETONDEMO_H

#include <iostream>

class LazySingletonDemo
{
private:
    static LazySingletonDemo* instance;

private:
    LazySingletonDemo() { std::cout << "LazySingletonDemo create" << std::endl;}
    ~LazySingletonDemo() {}
    LazySingletonDemo(const LazySingletonDemo&)=delete;
    LazySingletonDemo& operator=(const LazySingletonDemo&)=delete;
public:
    static LazySingletonDemo* getInstance()
    {
        if(instance == nullptr)
            instance = new LazySingletonDemo();
        return instance;
    }
};

LazySingletonDemo* LazySingletonDemo::instance = nullptr;



#endif // LAZYSINGLETONDEMO_H
