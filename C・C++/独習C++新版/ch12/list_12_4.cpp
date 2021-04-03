#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s = "apple";

    std::vector<char> cv{s.begin(), s.end()};

    for (char c : cv) {
        std::cout << c << std::endl;
    } 
}