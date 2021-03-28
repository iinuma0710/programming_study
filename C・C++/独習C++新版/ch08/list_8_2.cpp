#include <iostream>

int main()
{
    // デフォルトのフラグを保存
    auto dephault = std::cout.flags();

    std::cout.setf(std::ios::scientific);

    // basefield をクリア
    std::cout.setf(std::ios::hex, std::ios::basefield);

    // 科学技術表記で浮動小数点数を出力
    std::cout << 123.456f << std::endl;
    // 16進数表記で整数を出力
    std::cout << 123456 << std::endl;

    // デフォルトにリセット
    std::cout.flags(dephault);

    // 通常表記で浮動小数点数を出力
    std::cout << 123.456f << std::endl;
    // 通常表記で整数を出力
    std::cout << 123456 << std::endl;
}