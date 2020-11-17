#ifndef PERSON_H
#define PERSON_H

#include "person.h"

#include "string"
using namespace std;

class Chinese : public Person
{
public:
    Chinese(): Person(),m_character("ø¨ È"){}
    ~Chinese(){}

    void setCharacter(string character) {m_character = character;}
    string getCharacter() {return m_character; }

    virtual Person *clone() { return new Chinese(*this); }

private:
    string m_character;
};

#endif // PERSON_H
