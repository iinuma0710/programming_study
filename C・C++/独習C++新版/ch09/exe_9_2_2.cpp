#include <iostream>

template <typename T>
class A
{
public:
    void member_function(); 
};

template <typename T>
void A<T>::member_function()
{
    std::cout << "A<T>::member_function()" << std::endl;
}