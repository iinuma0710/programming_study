#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    double d = std::stod("3.14159265");

    std::cout << std::setprecision(9) << d << std::endl;
}