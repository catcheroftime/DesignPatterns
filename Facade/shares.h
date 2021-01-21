#ifndef SHARES_H
#define SHARES_H

#include <iostream>

using namespace std;

class MoutaiStock
{
public:
    void buy(int money) {cout << "buy MoutaiStock: " << money << endl;}
};

class TeslaStock
{
public:
    void buy(int money) {cout << "buy TeslaStock: "<< money  << endl;}
};

#endif // SHARES_H
