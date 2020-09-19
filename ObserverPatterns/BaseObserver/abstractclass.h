#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H

class Observer
{
public:
    virtual void Update() = 0;
};

class Subject
{
public:
    virtual void Attach(Observer *) = 0;
    virtual void Detach(Observer *) = 0;
    virtual void Notify() = 0;
};

#endif // ABSTRACTCLASS_H
