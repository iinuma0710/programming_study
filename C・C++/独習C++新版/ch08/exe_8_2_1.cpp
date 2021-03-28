#include <iostream>

int main()
{
    const double pi = 3.141592653589793238;
    std::cout.setf(std::ios::scientific);
    std::cout << pi << std::endl;
}