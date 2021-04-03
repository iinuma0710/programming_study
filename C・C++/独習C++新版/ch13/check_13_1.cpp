#include <iostream>
#include <string>

int main()
{
    std::string s0 = "Hello, ";
    std::string s1 = "this ";
    std::string s2 = "is a long";
    std::string s3 = "message";
    
    auto line = s0 + s1 + s2 + s3;

    std::cout << line << std::endl;
}