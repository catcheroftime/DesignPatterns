#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

class Director
{
public:
    void BuildUp(Builder& builder)
    {
        builder.BuildComputer();
        builder.AddCpu();
        builder.AddMainboard();
        builder.AddMemory();
        builder.AddGpu();
        builder.AddStorage();
        builder.AddPowersupply();
        builder.AddRadiator();
        builder.AddCase();
    }
};

#endif // DIRECTOR_H
