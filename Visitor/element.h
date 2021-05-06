#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>
using namespace std;

class Element
{
public:
    Element(const string name);

    string getName();



private:
    string m_name;
};

#endif // ELEMENT_H
