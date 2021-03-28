#include <iostream>

int main()
{
    const char* message = "Hello, C-style cast";

    // C 形式キャストでは const 修飾子を無視したキャストができる
    void* ptr = (void*)message;

    std::cout << (char*)ptr << std::endl;
}