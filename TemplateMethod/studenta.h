#ifndef STUDENTA_H
#define STUDENTA_H

#include "testpaper.h"

class StudentA : public TestPaper {
protected:
    virtual string user() {return "StudentA";}
    virtual string part1() { return "��";}
    virtual string part2() { return "Ц";}
};

#endif // STUDENTA_H
