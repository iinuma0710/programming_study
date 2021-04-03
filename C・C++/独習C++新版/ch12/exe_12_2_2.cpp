#include <iostream>
#include <vector>

int main()
{
    std::vector iv = { 1, 2, 3, 4, 5 };

    for (int e : iv)
    {
        std::cout << e << std::endl;
    }
}