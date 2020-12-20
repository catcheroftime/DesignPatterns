#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <list>
#include <iostream>

class Folder : public Component
{
public:
    Folder(std::string title) :Component(title) {}
    ~Folder()
    {
        std::cout << __func__ << " : "<< m_title << std::endl;
        while (!m_listComponents.empty()) {
          delete m_listComponents.front(),m_listComponents.pop_front();
        }
    }

    Component *getComposite() { return this; }

    virtual void Show(int iDepth)
    {
        std::cout << std::string(iDepth, '-') << m_title << std::endl;
        for (auto comp : m_listComponents) {
            comp->Show(iDepth+1);
        }
    }

    virtual void Open()
    {
        std::cout << "\""<<  m_title << "\"文件夹下文件为："<< std::endl;
        for (auto comp : m_listComponents) {
            comp->Show(0);
        }
    }

private:
    virtual void realAdd(Component* c) {  m_listComponents.push_back(c); }
    virtual void realRemove(Component* c) { m_listComponents.remove(c);}

private:
    std::list<Component *> m_listComponents;
};

#endif // COMPOSITE_H
