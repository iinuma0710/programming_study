#include <iostream>


void hello()
{
    std::cout << "Hello" << std::endl;
}

void goodbye()
{
    std::cout << "Good Bye" << std::endl;
}

int main()
{

#define hello goodbye

    hello();
}