#include <iostream>

int sum(int a, int b, int c)
{
    int x = a + b + c;
    return x;
}

int main()
{
    std::cout << "sum(5, 1, -2) = " << sum(5, 1, -2) << std::endl;
}