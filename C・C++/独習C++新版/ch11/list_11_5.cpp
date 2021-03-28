#include <cstdint>
#include <iostream>

// const 修飾されていない安全でない関数
// 特にC言語との兼ね合いであることが多い
extern "C" void unsafe_c_function(char* str)
{
    std::cout << "unsafe_c_function:" << str << std::endl;
}

// 正しい方で受け取れない関数
// コールバック API などでよく見られる
void unsafe_interface_function(void* data)
{
    // std::intptr_t はポインタ型の値を全て表現することができることを保証された，特殊な符号付き整数型
    // 符号なしの std::uintptr_t もある
    auto value = reinterpret_cast<std::intptr_t>(data);
    std::cout << "unsafe_interface_function:" << value << std::endl;
}

int main()
{
    const int value = 72;
    const char message[] = "constant string";

    // 関数に渡せるように const を外す
    unsafe_c_function(const_cast<char*>(message));

    // 数値をポインタ型に変換して渡す
    unsafe_interface_function(reinterpret_cast<void*>(static_cast<std::intptr_t>(value)));
}