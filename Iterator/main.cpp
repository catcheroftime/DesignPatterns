#include <iostream>
#include <list>
using namespace std;

void test()
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
    cout << *i << endl;
}

class A
{
public:
    A() {}
    virtual ~A() {}

private:
    int c;
    char a;

};


struct  B
{
    int a;
    float b;
    double c;
    char d;
};

int main()
{
    test();
    return 0;
}
