#ifndef HUNGRYSINGLETON_H
#define HUNGRYSINGLETON_H

#include <iostream>

class EagerSingleton
{
public:
    static EagerSingleton& getInstance(){return *instance;}

private:
    EagerSingleton() { std::cout << "EagerSingleton create" << std::endl; }
    ~EagerSingleton(){}
    EagerSingleton(const EagerSingleton&);
    EagerSingleton& operator=(const EagerSingleton&);

private:
    static EagerSingleton* instance;
};

EagerSingleton* EagerSingleton::instance = new EagerSingleton;


#endif // HUNGRYSINGLETON_H
