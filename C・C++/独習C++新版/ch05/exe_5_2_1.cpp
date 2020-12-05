#include <iostream>
#include <string>

class product
{
    int id = 0;
    std::string name = "not available";
    int price = 0;

public:

    explicit product(int id, std::string name, int price)
        : id(id), name(name), price(price)
    {
    }
};


int main()
{
    product p[4] = {
        product{1, "smart phone", 60000},
        product{2, "tablet", 350000},
    };
}