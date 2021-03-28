#include <iostream>

class A{};

class smart_ptr
{
    A* ptr = nullptr;

public:
    explicit smart_ptr(A* ptr) : ptr{ptr} {}
    
    ~smart_ptr()
    {
        delete ptr;
    }

    A* operator->() const
    {
        return ptr;
    }

    A& operator*() const
    {
        return *ptr;
    }
};