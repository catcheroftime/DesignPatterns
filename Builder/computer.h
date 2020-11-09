#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include <list>
#include <istream>

class Computer
{
public:
    void add(std::string part) { m_module.push_back(part);}
    void setPrice(int price) {m_price = price;}

    void show() {
        std::cout << m_price << " 价格的配置电脑如下： "<< std::endl;
        for (auto moudle : m_module)
            std::cout << moudle << std::endl;
    }

private:
    std::list<std::string> m_module;
    int m_price;
};

#endif // COMPUTER_H
