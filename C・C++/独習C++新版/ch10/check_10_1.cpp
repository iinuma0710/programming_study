#include <iostream>

int main()
{
    std::cout << "try の前" << std::endl;

    try
    {
        std::cout << "throw の前" << std::endl;

        throw 0;

        std::cout << "throw の後" << std::endl;
    }
    catch(int e)
    {
        std::cout << "例外処理：" << e <<std::endl;
    }
    
    std::cout << "try の後" << std::endl;
}