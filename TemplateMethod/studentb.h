#ifndef STUDENTB_H
#define STUDENTB_H

#include "testpaper.h"

class StudentB : public TestPaper {
protected:
    virtual string user() {return "StudentB";}
    virtual string part1() { return "Ë¯¾õ";}
    virtual string part2() { return "Æð´²";}
};

#endif // STUDENTB_H
