#include <iostream>

int main()
{
    // 通常表記で浮動小数点数を出力
    std::cout << 123.456f << std::endl;
    // 通常表記で整数を出力
    std::cout << 123456 << std::endl;

    // 科学技術表記で出力
    std::cout.setf(std::ios::scientific);
    // 浮動小数点数は科学技術表記になる
    std::cout << 123.456f << std::endl;
    // 整数には影響なし
    std::cout << 123456 << std::endl;

    // 16進数表記に変更
    std::cout.setf(std::ios::hex);
    // 浮動小数点数は科学技術表記のまま
    std::cout << 123.456f << std::endl;
    // 整数は16進数になってほしい
    std::cout << 123456 << std::endl;

    // 10進数表記をアンセット
    std::cout.unsetf(std::ios::dec);
    // 16進数表記だけがセットされているので 16 進数表記になる
    std::cout << 123456 << std::endl;
}