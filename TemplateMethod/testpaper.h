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
        std::cout << user <<": ��һ��" << first << ", һ��" << second << std::endl;
    }

protected:
    virtual string user() {return "�ο���";}
    virtual string part1() { return "��������";}
    virtual string part2() { return "��ϸ���ʼ�";}
};

#endif // TESTPAPER_H
