#include <iostream>

int main()
{
    auto lambda = [](auto v)
    {
        std::cout << v << std::endl;
    };

    lambda(0);

    lambda("lambda");
}