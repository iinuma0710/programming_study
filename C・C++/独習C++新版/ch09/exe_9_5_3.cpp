#include <iostream>

template <typename T>
class A
{
public:
    void class_method()
    {
        std::cout << "A<T>::method()" << std::endl;
    }
};

template <typename T>
void call_method(A<T> a)
{
    a.class_method();
}

int main()
{
    A<int> ai;

    call_method(ai);
}