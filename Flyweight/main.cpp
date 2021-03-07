#include "gopieces.h"

int main()
{
    GoPiecesFactory *factory = new GoPiecesFactory;

    string personA = "A";
    string personB = "B";

    factory->GetGoPieces("black")->moveTo(personA, 1, 1);
    factory->GetGoPieces("white")->moveTo(personB, 2, 2);
    factory->GetGoPieces("black")->moveTo(personA, 1, 2);
    factory->GetGoPieces("white")->moveTo(personB, 2, 1);

    SAFE_DELETE(factory);

    return 0;
}
