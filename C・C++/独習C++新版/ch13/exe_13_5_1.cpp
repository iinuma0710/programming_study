#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::string line, pattern;

    std::cout << "文字列>";
    std::getline(std::cin, line);

    std::cout << "正規表現>";
    std::getline(std::cin, pattern);

    std::regex re{pattern};

    if (std::regex_match(line, re)) {
        std::cout << "正規表現に完全マッチしました" << std::endl;
    } else {
        std::cout << "正規表現に完全マッチしませんでした" << std::endl;
    }
}