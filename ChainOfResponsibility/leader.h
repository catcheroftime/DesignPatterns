#ifndef LEADER_H
#define LEADER_H

#define UNUSED(x) (void)x

#include <iostream>
using namespace std;

class Leader {
public:
    Leader() : m_supLeader(nullptr), m_supportNumberDays(0) {}
    virtual ~Leader() {}

    void setSupLeader(Leader *leader) {
        m_supLeader = leader;
    }

    virtual void askForLeave(int day) {
        if ( day <= m_supportNumberDays)
            allowedToLeave(day);
        else
            noAuthority(day);
    }

private:
    virtual void allowedToLeave(int day) { UNUSED(day);}
    virtual void noAuthority(int day) { UNUSED(day);}

protected:
    Leader *m_supLeader;
    int m_supportNumberDays;
};

class ProjectLeader : public Leader {
public:
    ProjectLeader() : Leader() {
        m_supportNumberDays = 3;
    }

private:
    virtual void allowedToLeave(int day) {
        cout << "项目组长批准 " << day << " 天请假!" << endl;
    }

    virtual void noAuthority(int day) {
        if (m_supLeader)
            m_supLeader->askForLeave(day);
        else
            cout << "上级不在, 请重新申请!" << endl;
    }
};

class GroupLeader : public Leader {
public:
    GroupLeader() : Leader() {
        m_supportNumberDays = 7;
    }
private:
    virtual void allowedToLeave(int day) {
        cout << "部门组长批准 " << day << " 天请假!" << endl;
    }

    virtual void noAuthority(int day) {
        UNUSED(day);
        cout << "请假 " << day << " 天过长! 不予批准" << endl;
    }
};

#endif // LEADER_H
