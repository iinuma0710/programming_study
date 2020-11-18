#include <iostream>
#include <string>

int main()
{
    std::string s;

    do {
        std::cout << "文字列を入力してください > ";
        std::getline(std::cin, s);
        std::cout << s << std::endl;
    } while (s != "");

    std::cout << "終了" << std::endl;
}