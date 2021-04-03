#include <iostream>
#include <list>

int main()
{
    std::list l = { 3, 6, -1, 5, 8, 2};

    l.sort();

    for (int i: l) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}