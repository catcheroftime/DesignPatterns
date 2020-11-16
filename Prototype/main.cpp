#include <iostream>

using namespace std;

#include "person.h"

int main()
{

    Person *p = new ChinaPerson();
    cout << "P: "<<p->getYear() << "-------" << p->getName() << endl;
    p->setYear(30);
    p->setName("Tom");
    cout << "P: "<<p->getYear() << "-------" << p->getName() << endl;

    Person *p2 = p->clone();
    cout << "Copy: "<<p2->getYear() << "-------" << p2->getName() << endl;

    p2->setYear(20);
    p2->setName("Jack");
    cout << "P: "<<p->getYear() << "-------" << p->getName() << endl;
    cout << "Copy: "<<p2->getYear() << "-------" << p2->getName() << endl;


    return 0;
}
