#ifndef BUILDER_H
#define BUILDER_H

#include "computer.h"

class Builder {
public:
    virtual void BuildComputer() {}
    virtual void AddCpu(){}
    virtual void AddMainboard(){}
    virtual void AddMemory(){}
    virtual void AddGpu() {}
    virtual void AddStorage(){}
    virtual void AddPowersupply(){}
    virtual void AddRadiator() {}
    virtual void AddCase(){}
    virtual Computer *GetComputer() { return nullptr;}
protected:
    Builder(){}
};

class Builder6666: public Builder
{
public:
    Builder6666() : m_computer(nullptr) {}
    virtual void BuildComputer() {  m_computer = new Computer; m_computer->setPrice(6666);}
    virtual void AddCpu() { m_computer->add("CPU:10400F");}
    virtual void AddMainboard() {m_computer->add("���壺΢��B460M PRO VDH WIFI");}
    virtual void AddMemory() {m_computer->add("�ڴ棺��ʿ�ٺ�������2666 8Gx2");}
    virtual void AddGpu() {m_computer->add("�Կ�:΢����ͼʦ3X RTX3070");}
    virtual void AddStorage() {m_computer->add("��̬������SN550 500G");}
    virtual void AddPowersupply() {m_computer->add("��Դ�����ݷ���DQ650-M-V2L");}
    virtual void AddRadiator() {m_computer->add("ɢ���������ݷ�������400�����");}
    virtual void AddCase() {m_computer->add("���䣺����ƽͷ��M3");}
    virtual Computer *GetComputer() { return m_computer; }

private:
    Computer *m_computer;
};

class Builder11199: public Builder
{
public:
    Builder11199() : m_computer(nullptr){}
    virtual void BuildComputer() {  m_computer = new Computer; m_computer->setPrice(11199);}
    virtual void AddCpu() { m_computer->add("CPU:AMD����3900XɢƬ");}
    virtual void AddMainboard() {m_computer->add("���壺΢��B550 CARBON WIFI");}
    virtual void AddMemory() {m_computer->add("�ڴ棺��ʿ�ٺ�������RGB3200 8Gx2");}
    virtual void AddGpu() {m_computer->add("�Կ�:΢��RTX2070Superħ��");}
    virtual void AddStorage() {m_computer->add("��̬����������SN750 500G");}
    virtual void AddPowersupply() {m_computer->add("��Դ�����ݷ���DQ850");}
    virtual void AddRadiator() {m_computer->add("ɢ���������ݷ�����360EX RGB");}
    virtual void AddCase() {m_computer->add("���䣺���ݷ���CL500");}
    virtual Computer *GetComputer() { return m_computer; }

private:
    Computer *m_computer;
};

#endif // BUILDER_H
