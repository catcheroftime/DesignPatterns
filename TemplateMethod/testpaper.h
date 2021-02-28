#ifndef TESTPAPER_H
#define TESTPAPER_H

#include <iostream>
using namespace std;

class TestPaper {
public:
    void makeSentences() {
        string user = this->user();
        string first = this->part1();
        string second = this->part2();
        std::cout << user <<": 我一边" << first << ", 一边" << second << std::endl;
    }

protected:
    virtual string user() {return "参考答案";}
    virtual string part1() { return "认真听课";}
    virtual string part2() { return "仔细做笔记";}
};

#endif // TESTPAPER_H
