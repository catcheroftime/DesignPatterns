#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>
using namespace std;

class Visitor;

class Element
{
public:
    Element(const string name) : m_name(name) {}
    virtual ~Element() {}

    string getName() { return m_name; }
    virtual void accept(Visitor *) = 0;

private:
    string m_name;
};

#endif // ELEMENT_H
