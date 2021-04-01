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
        cout << "��Ŀ�鳤��׼ " << day << " �����!" << endl;
    }

    virtual void noAuthority(int day) {
        if (m_supLeader)
            m_supLeader->askForLeave(day);
        else
            cout << "�ϼ�����, ����������!" << endl;
    }
};

class GroupLeader : public Leader {
public:
    GroupLeader() : Leader() {
        m_supportNumberDays = 7;
    }
private:
    virtual void allowedToLeave(int day) {
        cout << "�����鳤��׼ " << day << " �����!" << endl;
    }

    virtual void noAuthority(int day) {
        UNUSED(day);
        cout << "��� " << day << " �����! ������׼" << endl;
    }
};

#endif // LEADER_H
