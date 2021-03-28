#include <iostream>
#include <iomanip>

int main()
{
    // 16進数に表示を切り替え
    std::cout << std::hex << 1234 << std::endl;

    //浮動小数点数の精度を変更
    std::cout << std::setprecision(6) << 1234.5678f << std::endl;

    // フラグをセットしてもマニピュレータでクリアできる
    std::cout.setf(std::ios::boolalpha);
    std::cout << std::noboolalpha << true << std::endl;
}