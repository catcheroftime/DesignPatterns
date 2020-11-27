#ifndef BLUETOOTH_H
#define BLUETOOTH_H

#include <iostream>

class BlueToothDevice
{
public:
    BlueToothDevice(){}
    virtual ~BlueToothDevice(){}
    virtual void connect() = 0;
};

class Ipad : public BlueToothDevice
{
public:
    void connect() { std::cout << "IPad connected to Bluetooth" << std::endl;}
};

class NintendoSwitch
{
public:
    void pluginHeadphones() { std::cout << "Nintendo Switch plug in headphones" << std::endl;}
};

class ObjectAdapter : public BlueToothDevice
{
public:
    void connect() { m_ns.pluginHeadphones();}
private:
    NintendoSwitch m_ns;
};

class ClassAdapter : public BlueToothDevice, private NintendoSwitch
{
public:
    void connect() {pluginHeadphones();}
};



#endif // BLUETOOTH_H
