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
    virtual void AssignedTasks(CppDevEngineer *) = 0;
    virtual void AssignedTasks(GoDevEngineer *) = 0;
    virtual void AssignedTasks(PythonDevEngineer *) = 0;
};

#endif // VISITOR_H
