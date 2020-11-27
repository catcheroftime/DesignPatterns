#include <iostream>
#include "bluetooth.h"

using namespace std;

#define SAFE_DELETE(x) {if(x){ delete x; x= nullptr;}}
#define UNUSED(x) (void)x;


int main(int argc, char *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    BlueToothDevice *device1 = new Ipad;
    device1->connect();

    BlueToothDevice *device2 = new ObjectAdapter;
    device2->connect();

    BlueToothDevice *device3 = new ClassAdapter;
    device3->connect();

    SAFE_DELETE(device1);
    SAFE_DELETE(device2);
    SAFE_DELETE(device3);

    return 0;
}
