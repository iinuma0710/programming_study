#include <vector>
#include <iostream>

template <typename T>
typename std::vector<T>::reference
at(std::vector<T>& v, std::size_t i)
{
    return v[i];
}

template <typename T>
typename std::size_t    // 依存名ではないので typename は不要だがエラーにはならない
size(const std::vector<T>& v)
{
    return v.size();
}

int main()
{
    std::vector<int> v = {0, 1, 2, 3};
    std::vector<int>::reference r = at(v, 0);
}