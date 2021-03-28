#include <iostream>

int main()
{
    throw 0;    // 誰も catch しない

    // std::terminate() が呼ばれる

    std::cout << "throw のあと" << std::endl;
}