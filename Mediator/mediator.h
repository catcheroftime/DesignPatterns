#ifndef MEDIATOR_H
#define MEDIATOR_H

class Widget;

class Mediator {
public:
    Mediator() {}
    virtual ~Mediator() {}

    virtual void buttonChanged(Widget *) = 0;
};

#endif // MEDIATOR_H
