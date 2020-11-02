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

enum OperatorType
{
    ADD = 0,
    SUB,
    MUL,
    DIV
};

class SimpleFactory
{
public:
    static Operation * CreateOperator(OperatorType type)
    {
        Operation * p;
        switch(type)
        {
        case ADD:
            p = new Add();
            break;
        case SUB:
            p = new Sub();
            break;
        case MUL:
            p = new Mul();
            break;
        case DIV:
            p = new Div();
            break;
        }
        return p;
    }
};

int main()
{
    double A = 20;
    double B = 0;

    Operation *op = SimpleFactory::CreateOperator(OperatorType::DIV);
    op->SetA(A);
    op->SetB(B);
    try {
        cout<< op->GetResult() <<endl;
    } catch (string exception ) {
        cout<< exception <<endl;
    }

    delete op;
    op = nullptr;
}
