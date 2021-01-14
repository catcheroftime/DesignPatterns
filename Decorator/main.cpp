#include "component.h"
#include "decorator.h"
#include <iostream>
using namespace std;

#define SAFE_DELETE(p) if(p){delete p; p=nullptr;}

int main()
{
//    PearlMilktea *pPearlMilktea = new PearlMilktea();
//    pPearlMilktea->drink();

//    AddIce *pAddIce = new AddIce(pPearlMilktea);
//    pAddIce->drink();

//    AddMilkFoam *pAddMilkFoam = new AddMilkFoam(pPearlMilktea);
//    pAddMilkFoam->drink();

//    SAFE_DELETE(pAddIce);
//    SAFE_DELETE(pAddMilkFoam);


    AddIce *pAddIce = new AddIce(new PearlMilktea());
    pAddIce->drink();

    SAFE_DELETE(pAddIce);



    return 0;
}
