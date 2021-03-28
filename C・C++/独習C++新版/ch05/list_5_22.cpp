#include <iostream>

int main()
{
    int&& i = 1;
    i = 0;

    if (1 == 0) {
        std::cout << "1 == 0" << std::endl;
    } else {
        std::cout << "1 != 0" << std::endl;
    }
}