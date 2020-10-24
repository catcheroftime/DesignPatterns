#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
using namespace std;

class Singleton
{
public:
    static Singleton& getInstance()
    {
        std::cout << "Singleton create" << std::endl;
        static Singleton value;
        return value;
    }

private:
    Singleton() = default;
    Singleton(const Singleton& other)=delete;
    Singleton& operator=(const Singleton&)=delete;
};

#endif // SINGLETON_H
