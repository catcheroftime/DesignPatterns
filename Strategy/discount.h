#ifndef DISCOUNT_H
#define DISCOUNT_H

class Discount{
public:
    virtual ~Discount(){}
    virtual double PriceAfterDiscount(double price) {
        return price;
    }
};

class NewCustomersDiscount :public Discount {
public:
    virtual double PriceAfterDiscount(double price) {
        return price>10?price-10:0;
    }
};

class MemberDiscount :public Discount {
public:
    virtual double PriceAfterDiscount(double price) {
        return price*0.9;
    }
};

#endif // DISCOUNT_H
