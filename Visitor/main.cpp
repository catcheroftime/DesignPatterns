#include "concreteelement.h"
#include "concretevisitor.h"

#include <list>
using namespace std;

template <typename Container>
inline void DeleteAll(const Container &c)
{
    auto begin = c.begin();
    auto end = c.end();
    while (begin != end) {
        delete *begin;
        ++begin;
    }
}

int main()
{
    list<Element *> staffs;

    staffs.push_back(new CppDevEngineer("xiaoA"));
    staffs.push_back(new GoDevEngineer("xiaoB"));
    staffs.push_back(new GoDevEngineer("xiaoC"));
    staffs.push_back(new CppDevEngineer("xiaoD"));
    staffs.push_back(new PythonDevEngineer("xiaoE"));
    staffs.push_back(new PythonDevEngineer("xiaoF"));


    ProjectA a;

    for (auto i : staffs) {
        i->accept(&a);
    }


    DeleteAll(staffs);

    return 0;
}
