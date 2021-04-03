#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::vector iv = { 0, 1, 2, 3 };

    iv.erase(iv.begin() + 2);
    for (auto e : iv) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}