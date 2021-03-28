#include <iostream>

template <typename T>
struct A
{
    T value;
};

// 実引数からテンプレートパラメータ T が推論される
template <typename T>
T get_value(A<T> a)
{
    return a.value;
}

int main()
{
    A<int> ai{42};
    // A<int> から T は int と推論される
    std::cout << get_value(ai) << std::endl;

    A<double> ad{3.1415};
    // A<double> から T は double と推論される
    std::cout << get_value(ad) << std::endl;
}