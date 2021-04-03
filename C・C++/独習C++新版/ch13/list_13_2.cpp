#include <iostream>
#include <string>

int main()
{
    // 2つの文字列を結合する
    std::string strA = "Hello, ";
    std::string strB = "world.";
    std::string strC = strA + strB;
    std::cout << strC << std::endl;

    if (strC == "Hello, world.") {
        std::cout << "OK." << std::endl;
    }
    // 確保された領域は自動的に解放される
}