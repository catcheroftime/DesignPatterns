#include "testpaper.h"
#include "studenta.h"
#include "studentb.h"

int main()
{
    TestPaper paper;
    paper.makeSentences();

    StudentA studenta;
    studenta.makeSentences();

    StudentB studentb;
    studentb.makeSentences();

    return 0;
}
