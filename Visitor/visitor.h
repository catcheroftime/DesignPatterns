#ifndef VISITOR_H
#define VISITOR_H

#include "concreteelement.h"


class Visitor
{
public:
    virtual ~IVisitor() {}
    virtual void Visit(BellTower *) = 0;
    virtual void Visit(TerracottaWarriors *) = 0;
};

#endif // VISITOR_H
