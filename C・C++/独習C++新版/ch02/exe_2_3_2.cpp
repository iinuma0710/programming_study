#include <iostream>

int main()
{
    const int i = 42;
    const int& j = i;

    std::cout<< j << std::endl;
}