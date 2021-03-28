#include <iostream>

template <typename T>
class A
{
public:
    template <typename U>
    void show(U u);
};

template <typename T>
template <typename U>
void A<T>::show(U u)
{
    std::cout << u << std::endl;
}

int main()
{
    A<int> a;

    a.show<int>(42);
}