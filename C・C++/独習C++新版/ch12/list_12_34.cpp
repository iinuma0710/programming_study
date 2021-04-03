#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector v = { 1, 2, 3 };

    auto iter = std::find(v.begin(), v.end(), 2);
    if (iter != v.end()) {
        std::cout << "*iter = " << *iter << std::endl;
    }

    iter = std::find_if(v.begin(), v.end(), [](int v){ return v == 3; });
    if (iter != v.end()) {
        std::cout << "*iter = " << *iter << std::endl;
    }
}