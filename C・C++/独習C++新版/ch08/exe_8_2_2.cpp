#include <iostream>

int main()
{
    int i = 12345;

    std::cout.setf(std::ios::right | std::ios::oct, std::ios::basefield);
    std::cout.width(8);
    std::cout.fill('-');

    std::cout << i << std::endl;
}