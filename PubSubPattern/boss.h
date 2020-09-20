#ifndef BOSS_H
#define BOSS_H

#include "doorman.h"

class Boss{
public:
    Boss(DoorMan *doorman): m_pDoorman(doorman){}

    void leaveCompany()
    {
        if (m_pDoorman)
            m_pDoorman->Publish("老板回家了");
    }

    void comeCompany()
    {
        if (m_pDoorman)
            m_pDoorman->Publish("老板来了");
    }

private:
    DoorMan * m_pDoorman;
};

#endif // BOSS_H
