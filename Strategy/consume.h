#ifndef CONSUME_H
#define CONSUME_H

#include "discount.h"
#include <iostream>

#define SAFE_DELETE(p) if(p){ delete p; p=nullptr;}

class Consume{

public:
    Consume(std::string user="") : m_dicount(nullptr), m_realPrice(0) {
        getDiscount(user);
    }
    ~Consume() { SAFE_DELETE(m_dicount); }

    void updateUser(std::string user) {
        SAFE_DELETE(m_dicount);
        getDiscount(user);
    }

    void AddProduct(std::string name, int price) {
        m_realPrice += price;
        std::cout <<"添加了新的商品 " <<name << " 价格为 " << price << " 目前总价为 "<<m_realPrice << std::endl;
    }

    double getTotalPrice(){
        return m_dicount->PriceAfterDiscount(m_realPrice);
    }

private:
    void getDiscount(std::string user){
        if (user == "NewCustomers")
            m_dicount = new NewCustomersDiscount;
        else if (user == "Member")
            m_dicount = new MemberDiscount;
        else
            m_dicount = new Discount;
    }

private:
    Discount *m_dicount;
    double m_realPrice;
};

#endif // CONSUME_H
