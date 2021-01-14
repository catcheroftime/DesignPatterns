#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

class Milktea
{
public:
    virtual ~Milktea(){}
    virtual void drink(){}
};


class PearlMilktea: public Milktea
{
public:
    virtual void drink(){
        std::cout << "�����̲�" << std::endl;
    }
};

#endif // COMPONENT_H
