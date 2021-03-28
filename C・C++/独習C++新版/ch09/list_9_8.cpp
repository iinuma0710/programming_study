#include <iostream>

template <typename T>
class S
{
public:
    static int value;
};

// static メンバ変数の型がテンプレートパラメータに依存していなくても記述は必須
template <typename T>
int S<T>::value = 0;

int main()
{
    // 初期値はどちらも 0 を与えている
    std::cout << "S<int>::value : " << S<int>::value << std::endl;
    std::cout << "S<float>::value : " << S<float>::value << std::endl;

    // それぞれの static メンバ変数のアドレスを表示
    std::cout << "&S<int>::value : " << &S<int>::value << std::endl;
    std::cout << "&S<float>::value : " << &S<float>::value << std::endl;

    // static メンバ変数を変更する
    S<int>::value = 42;

    // S<float>::value は変更されていない
    std::cout << "S<int>::value : " << S<int>::value << std::endl;
    std::cout << "S<float>::value : " << S<float>::value << std::endl;
}