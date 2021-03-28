#include <iostream>

template <typename T> T id(T val)
{
    return val;
}

int main()
{
    std::cout << id<int>(1) << std::endl;
    std::cout << id<float>(1.0) << std::endl;
    std::cout << id<char>('1') << std::endl;
    std::cout << id<std::string>("いち") << std::endl;
}