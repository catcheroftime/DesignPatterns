#include <iostream>
#include <vector>
using namespace std;

void test()
{
    vector<int> v;
    for (int n = 0; n<5; ++n)
        v.push_back(n);
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); ++i) {
        cout << *i << " ";
        *i *= 2;
    }
    cout << endl;
    for (vector<int>::reverse_iterator j = v.rbegin(); j != v.rend(); ++j)
        cout << *j << " ";
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
    cout << sizeof(unsigned long) << endl;
    cout << sizeof(A) << endl;
    return 0;
}
