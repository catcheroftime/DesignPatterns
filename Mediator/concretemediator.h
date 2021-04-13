#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#define SAFE_DELETE(p) if(p) {delete p; p=nullptr;}
#include "concretecolleague.h"
#include <iostream>
using namespace std;

class ConcreteMediator : public Mediator {
public:
    ConcreteMediator() :
        m_number1(new Button(this, string("1")))
      , m_number2(new Button(this, string("2")))
      , m_lineedit(new LineEdit(this))
    {}

    ~ConcreteMediator() {
        SAFE_DELETE(m_number1);
        SAFE_DELETE(m_number2);
        SAFE_DELETE(m_lineedit);
    }

    void clickButton1() {
        m_number1->Click();
    }

    void clickButton2() {
        m_number2->Click();
    }

    void showLineEditInfo() {
        cout << m_lineedit->getShowInfo() << endl;
    }

    virtual void buttonChanged(Widget *widget) {
        string new_info = m_lineedit->getShowInfo();

        if (widget == m_number1) {
            string info = m_number1->getShowInfo();
            new_info += info;
        } else if (widget == m_number2) {
            string info = m_number2->getShowInfo();
            new_info += info;
        }

        m_lineedit->setShowInfo(new_info);
    }

private:
    Button *m_number1;
    Button *m_number2;
    LineEdit *m_lineedit;
};

#endif // CONCRETEMEDIATOR_H
