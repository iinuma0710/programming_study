#include <iostream>
#include <string>

int main()
{
    std::string str = "Smart Connect Device Project";
    
    for (auto s = str.data(); *s; s++) {
        std::cout.put(*s);
    }
    std::cout << std::endl;
}