#include <iostream>
#include <string>

int main()
{
    std::string str = "Smart Connect Device Project";
    std::string sub = str.substr(5, 10);
    std::cout << sub << std::endl;
}