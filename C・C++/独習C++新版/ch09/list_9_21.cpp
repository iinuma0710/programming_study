#include <iostream>
#include <string>

// helper クラスの前方宣言
template <typename T>
class helper;

// int の時に使われる
template <>
class helper<int>
{
public:
    static std::string name() { return "int"; }
};

// double の時に使われる
template <>
class helper<double>
{
public:
    static std::string name() { return "double"; }
};


template <typename T>
struct A
{
    T value;
};

template <typename T>
void deduce(A<T> a)
{
    // 推論された T を使ってヘルパークラスの static メンバ関数を呼び出す
    std::cout << helper<T>::name() << std::endl;
}

int main()
{
    A<int> ai;
    deduce(ai);

    A<double> ad;
    deduce(ad);
}