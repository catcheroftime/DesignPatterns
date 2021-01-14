#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

class Decorator: public Milktea
{
public:
    Decorator(Milktea *tea) : m_milktea(tea) {}
    virtual ~Decorator(){
        if (m_milktea) delete m_milktea;
    }

    virtual void drink(){
        m_milktea->drink();
    }

private:
    Milktea *m_milktea;
};


class AddIce: public Decorator
{
public:
    AddIce(Milktea *tea) : Decorator(tea) {}

    virtual void drink(){
        addIce();
        Decorator::drink();
    }

private:
    void addIce() { std::cout << "加冰的";}
};

class AddMilkFoam: public Decorator
{
public:
    AddMilkFoam(Milktea *tea) : Decorator(tea) {}

    virtual void drink(){
        addMilkFoam();
        Decorator::drink();
    }

private:
    void addMilkFoam() { std::cout << "加奶盖的";}
};


#endif // DECORATOR_H
