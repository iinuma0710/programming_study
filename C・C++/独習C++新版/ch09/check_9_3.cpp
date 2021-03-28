#include <utility>

template <typename... T>
void eat(const T&...) { }

template <typename... T>
void fwd(T&&... values)
{
    eat(std::forward<T>(values)...);
}

int main()
{
    fwd(0, 1, 2, 3);
}