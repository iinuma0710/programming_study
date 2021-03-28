#include <iostream>

template <typename T>
class A
{
public:
    A() {}

    template <typename U>
    A(A<U>) {}

    template <typename U>
    using rebind = A<U>;

    template <typename U>
    void foo()
    {
        std::cout << "A<T>::foo<U>()" << std::endl;
    }

    template <typename U>
    void bar(U u)
    {
        std::cout << "A<T>::bar<U>(" << u << ")" << std::endl;
    }
};

template <typename U, typename T>
void call_foo(A<T>& a)
{
    // template 演算子を使っていても，依存名が型名の場合には typename キーワードが必要
    typename A<T>::template rebind<U> b = a;
    b.template foo<int>();

    // 依存名がテンプレートであっても型推論が使われている場合には template 限定子は不要
    b.bar(42);
}

int main()
{
    A<int> a;

    call_foo<void>(a);
}