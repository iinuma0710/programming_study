#include <vector>
#include <iostream>

// エイリアステンプレート
template <typename T>
using vector_reference = typename std::vector<T>::reference;

// エイリアスの中で依存名が解決しているのでここでは不要
template <typename T>
vector_reference<T>
at(std::vector<T>& v, std::size_t i)
{
    return v[i];
}