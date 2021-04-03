#include <iostream>
#include <set>

int main()
{
    std::set s = {0, 0, 0, 0, 1, 1, 2, 2};
    
    for (auto e : s)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    
    s.insert(3);
    for (auto e : s) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    
    s.insert(3);
    for (auto e : s) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}