#include "originator.h"
#include <windows.h>

#define SAFE_DELETE(p) if(p) {delete p; p=nullptr;}

int main()
{
    Originator *originator1 = new Originator;
    originator1->showState();

    originator1->setState("first");
    originator1->showState();

    Memento *backup1 = originator1->createMemento();

    originator1->setState("second");
    originator1->showState();

    originator1->setMemento(backup1);
    originator1->showState();

    cout << "--------------------" << endl;
    Sleep(1000);

    Originator *originator2 = new Originator;
    originator2->showState();
    originator2->setMemento(backup1);
    originator2->showState();


    SAFE_DELETE(originator1);
    SAFE_DELETE(originator2);
    SAFE_DELETE(backup1);

    return 0;
}
