#ifndef HANDSETSOFT_H
#define HANDSETSOFT_H

#include <iostream>

class HandsetSoft
{
public:
    virtual ~HandsetSoft() {}
    virtual void run() = 0;
};

class HandsetGame: public HandsetSoft
{
public:
    void run() { std::cout << "run HandsetGame" << std::endl; }
};

class HandsetAddressList: public HandsetSoft
{
public:
    void run() { std::cout << "run HandsetAddressList" << std::endl; }
};

#endif // HANDSETSOFT_H
