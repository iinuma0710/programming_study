#include <string>
#include <iostream>
#include <iomanip>

int main()
{
    std::string a = "ALGOL";
    std::string b = "brainfuck";

    if (a > b) {
        std::cout << a << " > " << b << std::endl;
    } else {
        std::cout << a << " < " << b << std::endl;
    }
}