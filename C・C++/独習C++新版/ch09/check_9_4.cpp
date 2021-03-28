#include <type_traits>

template <typename T>
void foo(T val)
{
    static_assert(std::is_integral<T>::value)
}