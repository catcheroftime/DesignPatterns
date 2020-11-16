#ifndef PERSON_H
#define PERSON_H

#include "prototype.h"

#include "string"
using namespace std;

class ChinaPerson : public Person
{
public:
    ChinaPerson(): Person(){}
    ~ChinaPerson(){}

    virtual Person *clone() { return new ChinaPerson(*this); }
};

#endif // PERSON_H
