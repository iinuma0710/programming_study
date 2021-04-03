#include <iostream>
#include <vector>

int main()
{
    std::vector iv = { 1, 2, 3, 4, 5 };

    iv.push_back(77);

    for (int e : iv)
    {
        std::cout << e << std::endl;
    }
}