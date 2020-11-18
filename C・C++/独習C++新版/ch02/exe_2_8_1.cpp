#include <iostream>

int main()
{
    auto show = [](int v) -> void {
        std::cout << v << std::endl;
    };

    show(42);
}