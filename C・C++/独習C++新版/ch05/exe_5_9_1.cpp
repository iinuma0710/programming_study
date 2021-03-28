#include <iostream>

void message()
{
    std::cout << "Hello, function pointer" << std::endl;
}

int main()
{
    void (*fptr)() = message;

    fptr();
}