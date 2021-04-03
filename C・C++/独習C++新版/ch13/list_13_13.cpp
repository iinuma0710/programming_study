#include <iostream>
#include <string>

int main()
{
    std::string str = "ushikamoshika";
    std::string sub = "shika";
    
    std::cout << str.find(sub) << std::endl;
    std::cout << str.find(sub, 2) << std::endl;

    std::cout << str.rfind(sub) << std::endl;
    std::cout << str.rfind(sub, 2) << std::endl;

    std::cout << str.find('s') << std::endl;
    std::cout << str.rfind('s') << std::endl;
}