#include <iostream>

int main()
{
    int a = 3;

    if (a + 1 == 1) {
        std::cout << "a + 1 は 1 です" << std::endl;
    } else if (a + 1 == 2) {
        std::cout << "a + 1 は 2 です" << std::endl;
    } else if (a + 1 == 3) {
        std::cout << "a + 1 は 3 です" << std::endl;
    } else {
        std::cout << "a + 1 は 1 でも 2 でも 3 でもありません" << std::endl;
    }
}