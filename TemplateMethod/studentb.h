#ifndef STUDENTB_H
#define STUDENTB_H

#include "testpaper.h"

class StudentB : public TestPaper {
protected:
    virtual string user() {return "StudentB";}
    virtual string part1() { return "˯��";}
    virtual string part2() { return "��";}
};

#endif // STUDENTB_H
