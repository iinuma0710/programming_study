#include <iostream>

template <typename T>
class A
{
    T value;
public:
    using value_type = T;
    explicit A(T value) : value(value) {}
    T& get_value() { return value; }
};

template <typename T>
using A_value = typename A<T>::value_type;

template <typename T>
A_value<T>& get(A<T>& a)
{
    return a.get_value();
}

int main()
{
    A<int> a{42};
    std::cout << get(a) << std::endl;
}