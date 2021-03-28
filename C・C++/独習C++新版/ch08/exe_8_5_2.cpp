#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in{__FILE__};

    std::string line;
    while (in.eof() != true) {
        std::getline(in, line);
        std::cout << line << std::endl;
    }
}