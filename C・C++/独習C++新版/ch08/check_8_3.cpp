#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in{"input.bin", std::ios::binary};

    char buffer[100];
    in.read(buffer, sizeof(buffer));
}