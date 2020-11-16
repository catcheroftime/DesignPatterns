#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include "string"
using namespace std;

class Person
{
public:
    Person():m_year(0), m_name("") {}
    ~Person(){}

    virtual Person *clone() { return new Person(*this); }

    void setYear(int year) { m_year = year;}
    int getYear() { return m_year;}

    void setName(string name) { m_name = name;}
    string getName() {return m_name;}

private:
    int m_year;
    string m_name;
};


#endif // PROTOTYPE_H
