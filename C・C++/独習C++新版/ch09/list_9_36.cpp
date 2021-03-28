#include <iostream>
#include <string>

std::string type(int)
{
    return "int";
}

std::string type(const char*)
{
    return "const char*";
}

int main()
{
    auto lambda = [](const auto& value)
    {
        std::cout << type(value) << std::endl;
    };

    lambda(42);

    lambda("type deduction");
}