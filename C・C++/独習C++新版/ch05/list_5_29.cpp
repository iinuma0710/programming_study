#include <iostream>

class C
{
    int a;

public:
    explicit C(int a) : a(a) {}

    void copy_and_set(int value) const  //メンバ変数の変更不可
    {
        std::cout << "copy_and_set_a: a == " << a << std::endl;

        [*this, value]() mutable {
            std::cout << "lambda: a == " << a << std::endl;
            a = value;
            std::cout << "lambda: a == " << a << std::endl;
        }();

        std::cout << "copy_and_set_a: a == " << a << std::endl;
    }
};

int main()
{
    C c(42);

    c.copy_and_set(0);
}