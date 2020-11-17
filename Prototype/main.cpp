#include "chinese.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "初始化原实例，并对其赋值"<< endl;
    Person *p = new Chinese();
    p->setYear(30);
    p->setName("张三");
    cout << "原实例  年龄："<<p->getYear() << "， 名称：" << p->getName() << endl;

    Person *p2 = p->clone();
    cout << "克隆原实例"<< endl;
    cout << "克隆体  年龄："<<p2->getYear() << "， 名称：" << p2->getName() << endl;

    cout << "对克隆体重新赋值"<< endl;
    p2->setYear(20);
    p2->setName("李四");
    cout << "原实例  年龄："<<p->getYear() << "， 名称：" << p->getName() << endl;
    cout << "克隆体  年龄："<<p2->getYear() << "， 名称：" << p2->getName() << endl;

    return 0;
}

//int main()
//{
//    cout << "初始化原实例，并对其赋值"<< endl;
//    Chinese *p = new Chinese();
//    p->setYear(30);
//    p->setName("张三");
//    p->setCharacter("小篆");
//    cout << "原实例  年龄："<<p->getYear() << "， 名称：" << p->getName() << "， 书法：" << p->getCharacter() << endl;

//    Person *p2 = p->clone();
//    if (auto p3 = dynamic_cast<Chinese*> (p2) ) {
//        cout << "克隆原实例"<< endl;
//        cout << "克隆体  年龄："<<p3->getYear() << "， 名称：" << p3->getName() <<  "， 书法：" << p3->getCharacter() << endl;

//        cout << "对克隆体重新赋值"<< endl;
//        p3->setYear(20);
//        p3->setName("李四");
//        p3->setCharacter("隶书");
//        cout << "原实例  年龄："<<p->getYear() << "， 名称：" << p->getName() << "， 书法：" << p->getCharacter() << endl;
//        cout << "克隆体  年龄："<<p3->getYear() << "， 名称：" << p3->getName() <<  "， 书法：" << p3->getCharacter() << endl;
//    }

//    return 0;
//}
