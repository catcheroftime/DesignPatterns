#include "chinese.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "��ʼ��ԭʵ���������丳ֵ"<< endl;
    Person *p = new Chinese();
    p->setYear(30);
    p->setName("����");
    cout << "ԭʵ��  ���䣺"<<p->getYear() << "�� ���ƣ�" << p->getName() << endl;

    Person *p2 = p->clone();
    cout << "��¡ԭʵ��"<< endl;
    cout << "��¡��  ���䣺"<<p2->getYear() << "�� ���ƣ�" << p2->getName() << endl;

    cout << "�Կ�¡�����¸�ֵ"<< endl;
    p2->setYear(20);
    p2->setName("����");
    cout << "ԭʵ��  ���䣺"<<p->getYear() << "�� ���ƣ�" << p->getName() << endl;
    cout << "��¡��  ���䣺"<<p2->getYear() << "�� ���ƣ�" << p2->getName() << endl;

    return 0;
}

//int main()
//{
//    cout << "��ʼ��ԭʵ���������丳ֵ"<< endl;
//    Chinese *p = new Chinese();
//    p->setYear(30);
//    p->setName("����");
//    p->setCharacter("С׭");
//    cout << "ԭʵ��  ���䣺"<<p->getYear() << "�� ���ƣ�" << p->getName() << "�� �鷨��" << p->getCharacter() << endl;

//    Person *p2 = p->clone();
//    if (auto p3 = dynamic_cast<Chinese*> (p2) ) {
//        cout << "��¡ԭʵ��"<< endl;
//        cout << "��¡��  ���䣺"<<p3->getYear() << "�� ���ƣ�" << p3->getName() <<  "�� �鷨��" << p3->getCharacter() << endl;

//        cout << "�Կ�¡�����¸�ֵ"<< endl;
//        p3->setYear(20);
//        p3->setName("����");
//        p3->setCharacter("����");
//        cout << "ԭʵ��  ���䣺"<<p->getYear() << "�� ���ƣ�" << p->getName() << "�� �鷨��" << p->getCharacter() << endl;
//        cout << "��¡��  ���䣺"<<p3->getYear() << "�� ���ƣ�" << p3->getName() <<  "�� �鷨��" << p3->getCharacter() << endl;
//    }

//    return 0;
//}
