#include <iostream>
#include <iomanip>

int main()
{
    int i = 123456;
    std::cout << std::hex << std::left << std::setw(16) << std::setfill('=') << i << std::endl;
}