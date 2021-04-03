#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{"[^A]+A"};   // A でない文字の連続に続く A
    std::string input = "ABRACADABRA";
    
    std::sregex_token_iterator first(input.begin(), input.end(), re);
    decltype(first) last;

    while (first != last) {
        std::cout << "[" << first->str() << "]"
            << " position = " << std::distance(input.cbegin(), first->first)
            << " length = " << first->length()
            << std::endl;
        ++first;
    }
}