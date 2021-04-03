#include <iostream>
#include <string>

int main()
{
    std::string str{ "Hello\0world", 11 };
    std::cout << str << std::endl;  // Helloworld

    for (char ch : str) {
        std::cout << (ch == '\0' ? '_' : ch);
    }
    std::cout << std::endl;
}