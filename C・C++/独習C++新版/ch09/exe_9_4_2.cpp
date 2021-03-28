#include <iostream>

template<typename T>
class A
{
    T val;

public:
    explicit A(T val) : val(val) {}

    void show_val()
    {
        std::cout << val << std::endl;
    }
};


template<>
class A<void>
{
public:
    void show_val()
    {
        std::cout << "void" << std::endl;
    }
};

int main()
{
    A<float> a1(3.1415);
    a1.show_val();

    A<void> a2;
    a2.show_val();
}