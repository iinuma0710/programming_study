#include <iostream>

void show_value(float f)
{
    std::cout << f << std::endl;
}

int main()
{
    // int -> float に変更
    float i = 42.195f;
    show_value(i);
}