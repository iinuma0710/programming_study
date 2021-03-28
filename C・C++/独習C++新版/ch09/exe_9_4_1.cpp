#include <iostream>

template<typename T>
void show_msg(T val)
{
    std::cout << "これはプライマリテンプレートです: " << val << std::endl;
}

template<>
void show_msg(int val)
{
    std::cout << "これは明示的特殊化されたテンプレートです: " << val << std::endl;
}

int main()
{
    show_msg<float>(3.1425);
    show_msg<int>(42);
}