#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::vector iv0 = { 3, 7, -1, 2, 0 };
    std::vector iv1 = { 0, 1, 2, 3 };

    std::copy(iv0.begin(), iv0.end(), std::inserter(iv1, iv1.begin()));
    for (auto e : iv1) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}