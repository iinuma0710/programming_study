#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{"BRA"};
    std::string input = "ABRACADABRA";

    if (std::regex_search(input, re)) {
        std::cout << "マッチしました!" << std::endl;
    }
}