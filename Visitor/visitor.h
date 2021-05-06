#ifndef VISITOR_H
#define VISITOR_H

#include "concreteelement.h"

class CppDevEngineer;
class GoDevEngineer;
class PythonDevEngineer;

class Visitor
{
public:
    virtual ~Visitor() {}
    virtual void ArrangeCPP(CppDevEngineer *) = 0;
    virtual void ArrangeGo(GoDevEngineer *) = 0;
    virtual void ArrangePython(PythonDevEngineer *) = 0;
};

#endif // VISITOR_H
