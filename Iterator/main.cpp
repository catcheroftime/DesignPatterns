#include <memory>
#include <iostream>
#include <list>
using namespace std;

struct A {
    A* operator &() {return nullptr;}
};

void testAddressof()
{
    A a;
    std::cout << &a << endl;
    std::cout << std::__addressof(a) << endl;
}

void testIterator()
{
    list<int> v;
    for (int n = 0; n<8; ++n)
        v.push_back(n);

    list<int>::iterator i;
    for (i = v.begin() ;i != v.end(); ++i) {
        cout << *i << " ";
        *i *= 2;
    }

    cout << endl;
    for (i = v.begin() ;i != v.end(); ++i) {
        cout << *i << " ";
    }

    cout << endl;
    cout << *v.end() << endl;
}


int main()
{
//    testAddressof();
    testIterator();
    return 0;
}
