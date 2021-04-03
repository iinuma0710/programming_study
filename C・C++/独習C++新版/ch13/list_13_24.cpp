#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{"([^A]+A)([^A]+A)"};   // A でない文字の連続に続く (A) x2
    std::string input = "ABRACADABRA";
    std::smatch match;

    if (std::regex_search(input, match, re)) {
        for (std::size_t i = 0; i < match.size(); ++i) {
            std::cout << "[" << match.str(i) << "]"
                << " position = " << match.position(i)
                << " length = " << match.length(i)
                << std::endl;
        }
    }
}