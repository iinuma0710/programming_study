#include <iostream>
#include <string>
#include <vector>

class product
{
    int id = 0;
    std::string name = "not available";
    int price = 0;

public:

    explicit product(int id, std::string name, int price) : id(id), name(name), price(price)
    {
    }
};


int main()
{
    std::vector<product> p = {
        product{1, "smart phone", 60000},
        product{2, "tablet", 350000},
    };

    p.push_back(product{3, "laptop", 100000});
    p.push_back(product{4, "desktop", 300000});
}