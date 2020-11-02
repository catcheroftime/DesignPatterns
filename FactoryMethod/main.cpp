#include <iostream>

using namespace std;

class Operation
{
public:
    Operation():A(0), B(0){}
    virtual ~Operation(){}

    double GetA() const { return A; }
    double GetB() const { return B; }
    void SetA(double x) { A=x; }
    void SetB(double y) { B=y; }
    double virtual GetResult(){ return 0; }

private:
    double A, B;
};

class Add : public Operation
{
public:
    double GetResult()
    {
        return GetA()+GetB();
    }
};

class Sub : public Operation
{
public:
    double GetResult()
    {
        return GetA()-GetB();
    }
};

class Mul : public Operation
{
public:
    double GetResult()
    {
        return GetA()*GetB();
    }
};

class Div : public Operation
{
public:
    double GetResult()
    {
        if (GetB() == 0)
            throw string("Division by zero condition!");
        return GetA()/GetB();
    }
};


class Factory
{
public:
    virtual Operation *CreateOperator()=0;
};

class AddFactory : public Factory
{
public:
    Operation *CreateOperator() {
        return new Add();
    }
};

class SubFactory : public Factory
{
public:
    Operation *CreateOperator() {
        return new Sub();
    }
};

class MulFactory : public Factory
{
public:
    Operation *CreateOperator() {
        return new Mul();
    }
};

class DivFactory : public Factory
{
public:
    Operation *CreateOperator() {
        return new Div();
    }
};

#define SAFE_DELETE(p) {if(p){delete p; p=nullptr;}}

int main()
{
    double A = 20;
    double B = 0;

    Factory *divFactory = new DivFactory();
    Operation *op = divFactory->CreateOperator();
    op->SetA(A);
    op->SetB(B);
    try {
        cout<< op->GetResult() <<endl;
    } catch (string exception ) {
        cout<< exception <<endl;
    }

    SAFE_DELETE(op);
    SAFE_DELETE(divFactory)
}
