#include "consume.h"

int main()
{
    Consume member;
    member.AddProduct("cola", 10);
    member.AddProduct("hamburger", 20);
    member.AddProduct("frenchfries", 15);

    double price = member.getTotalPrice();
    std::cout << "共需支付 : "<<price << std::endl;

    member.updateUser("Member");
    price = member.getTotalPrice();
    std::cout << "共需支付 : "<<price << std::endl;
    return 0;
}
