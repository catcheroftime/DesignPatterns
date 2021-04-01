#ifndef HANDSETBRAND_H
#define HANDSETBRAND_H

#include "handsetsoft.h"
#define SAFE_DELETE(p) { if(p) { delete p; p=nullptr;}}

class HandsetBrand
{
public:
    HandsetBrand() : m_software(nullptr) {}
    virtual ~HandsetBrand() { SAFE_DELETE(m_software);}

    void installSoftware(HandsetSoft *software){ SAFE_DELETE(m_software); m_software = software; }
    virtual void runsoftware() = 0;

protected:
    HandsetSoft *m_software;
};

class HandsetBrandA : public HandsetBrand
{
public:
    void runsoftware()  { std::cout << "HandsetBrandA: ";if(m_software) m_software->run(); }
};

class HandsetBrandB : public HandsetBrand
{
public:
    void runsoftware()  { std::cout << "HandsetBrandB: ";if(m_software) m_software->run(); }
};


#endif // HANDSETBRAND_H
