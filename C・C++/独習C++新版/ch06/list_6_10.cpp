#include <iostream>

class A
{
    int value;

public:
    explicit A(int value) : value{value} { }
    void show() const;
};

void A::show() const
{
    std::cout << "A.value : " << value << std::endl;
}

class A_observer_ptr
{
    A* pointer;

public:
    explicit A_observer_ptr(A* pointer) : pointer{pointer} { }
    A& operator*() const;   // 間接参照演算子
    A* operator->() const;  // アロー演算子
};

// 非 const な参照を返す
A& A_observer_ptr::operator*() const
{
    return *pointer;
}

// アロー演算子はポインタを返す
A* A_observer_ptr::operator->() const
{
    return pointer;
}

int main()
{
    A a{42};
    A_observer_ptr pointer{&a};

    (*pointer).show();  // 間接参照演算子を使ってメンバ関数にアクセス
    pointer->show();    // アロー演算子を使ってメンバ関数にアクセス
}