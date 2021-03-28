#include <iostream>
#include <typeinfo>

int main()
{
    auto lambda_1 = [](){ std::cout << "hello" << std::endl; };
    auto lambda_2 = [](){ std::cout << "hello" << std::endl; };

    if (typeid(lambda_1) != typeid(lambda_2)) {
        std::cout << "typeid(lambda_1) != typeid(lambda_2)" << std::endl;
    }
}