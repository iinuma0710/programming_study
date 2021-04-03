#include <iostream>
#include <tuple>

int main()
{
    std::tuple t = { 3.1415, "tuple", 77 };

    auto [f, s, i] = t;

    std::cout << f << std::endl;
    std::cout << s << std::endl;
    std::cout << i << std::endl;
}