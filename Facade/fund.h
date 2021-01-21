#ifndef FUND_H
#define FUND_H

#include "shares.h"

#define SAFE_DELETE(p) if(p) {delete p; p=nullptr;}

class EFund{
public:
    EFund() : m_pMoutaiStock(new MoutaiStock), m_pTeslaStock(new TeslaStock) {}
    ~EFund() { SAFE_DELETE(m_pMoutaiStock); SAFE_DELETE(m_pTeslaStock); }

    void buy(int money){
        cout << "buy EFund: " << money << endl;
        m_pMoutaiStock->buy(money/10*7);
        m_pTeslaStock->buy(money/10*3);
    }

private:
    MoutaiStock *m_pMoutaiStock;
    TeslaStock *m_pTeslaStock;
};

#endif // FUND_H
