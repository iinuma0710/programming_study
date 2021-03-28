#include <iostream>

template <typename Type>
Type fused_multiply_add(Type a, Type b, Type c)
{
    return a * b + c;
}

int main()
{
    // Type を int と推論して呼び出し
    std::cout << fused_multiply_add(1, 2, 3) << std::endl;
    // Type を float と推論して呼び出し
    std::cout << fused_multiply_add(1.23456f, 2.34567f, 3.45678f) << std::endl;
    // Type を double と推論して呼び出し
    std::cout << fused_multiply_add(1.23456, 2.34567, 3.45678) << std::endl;

}