#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

#define UNUSED(x) (void)x;

class Component
{
public:
    Component(std::string title) : m_title(title) {}
    virtual ~Component(){}

    virtual Component *getComposite() { return nullptr; }

    void Add(Component* c)
    {
        if (auto comp = getComposite())
            comp->realAdd(c);
    }

    void Remove(Component* c)
    {
        if (auto comp = getComposite())
            comp->realRemove(c);
    }

    virtual void Show(int iDepth = 1) = 0;
    virtual void Open() = 0;

private:
    virtual void realAdd(Component* c) { UNUSED(c) }
    virtual void realRemove(Component* c) { UNUSED(c) }

protected:

    std::string m_title;
};

#endif // COMPONENT_H
