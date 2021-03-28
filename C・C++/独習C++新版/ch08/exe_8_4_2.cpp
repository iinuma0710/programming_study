#include <iostream>
#include <iomanip>

int main()
{
    int i = 1234;
    std::cout << std::right << std::setw(8) << std::setfill('0') << i << std::endl;
}