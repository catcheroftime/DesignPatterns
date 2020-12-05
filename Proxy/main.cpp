#include <iostream>
#include "image.h"

#define UNUSED(x) (void)x;
using namespace std;
int main(int argc, char *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    std::string filepath;
    ImagePtr ptr = ImagePtr(filepath);
    ptr->Draw();
 //    ptr.operator ->()->Draw();

    ImageProxy proxy = ImageProxy(filepath);
    proxy.Draw();

    return 0;
}
