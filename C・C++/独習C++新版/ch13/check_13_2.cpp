#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    const int i = 3249;

    auto s = std::to_string(i);

    auto j = std::stoi(s);

    std::cout << std::boolalpha << (i == j) << std::endl;
}