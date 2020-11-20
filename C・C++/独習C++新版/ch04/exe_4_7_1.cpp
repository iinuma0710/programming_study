#include <iostream>

void show()
{
    std::cout << "From global namespace" << std::endl;
}

namespace module
{
    void show()
    {
        std::cout << "From module namespace" << std::endl;
    }
}

int main()
{
    show();
    module::show();
}