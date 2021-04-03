#include <iostream>
#include <vector>

int main()
{
    std::vector iv = { 1, 2, 3, 4, 5 };

    iv.resize(4);   // 短くする

    std::cout << "size() = " << iv.size() << std::endl;

    iv.resize(6, -1);   // 長くして，増えた分を -1 で初期化

    std::cout << "size() = " << iv.size() << std::endl;

    for (int i : iv) {
        std::cout << i << std::endl;
    }
}