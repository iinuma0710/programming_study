#include <iostream>
#include <tuple>

int main()
{
    std::tuple t{3.14159265, "tuple", 77};

    std::cout << std::get<0>(t) << std::endl;
    std::cout << std::get<1>(t) << std::endl;
    std::cout << std::get<2>(t) << std::endl;
    std::cout << std::endl;
    
    std::get<0>(t) = 2.718281828;

    std::cout << std::get<0>(t) << std::endl;
    std::cout << std::get<1>(t) << std::endl;
    std::cout << std::get<2>(t) << std::endl;
}