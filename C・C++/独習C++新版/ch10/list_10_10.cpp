#include <iostream>
#include <exception>

class my_exception : public std::exception
{
    const char* message;

public:
    explicit my_exception(const char* message);
    const char* what() const noexcept override; // 例外に関するメッセージを返す
};

// 受け取ったメッセージを持っておく
my_exception::my_exception(const char* message)
    : message{message}
{

}

const char* my_exception::what() const noexcept
{
    // メッセージを返す
    return message;
}

int main()
{
    try
    {
        // 自前の例外メッセージを投げる
       throw my_exception{"My Exception"} ;
    }
    catch(my_exception& e)
    {
        std::cout << "what: " << e.what() << std::endl;
    }
    
}