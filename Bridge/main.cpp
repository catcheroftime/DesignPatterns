#include "handsetbrand.h"

int main()
{
    HandsetBrandA brandA;
    brandA.installSoftware(new HandsetGame);
    brandA.runsoftware();

    brandA.installSoftware(new HandsetAddressList);
    brandA.runsoftware();

    HandsetBrandB brandB;
    brandB.installSoftware(new HandsetGame);
    brandB.runsoftware();

    brandB.installSoftware(new HandsetAddressList);
    brandB.runsoftware();

    return 0;
}
