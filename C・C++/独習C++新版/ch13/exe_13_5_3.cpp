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
    std::smatch match;

    if (std::regex_search(line, match, re)) {
        for (std::size_t i = 0; i < match.size(); ++i) {
            std::cout << match.str(i)
                << " position = " << match.position(i)
                << " length = " << match.length(i)
                << std::endl;
        }
    } else {
        std::cout << "正規表現にマッチしませんでした" << std::endl;
    }
}