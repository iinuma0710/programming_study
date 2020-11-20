#include <iostream>

namespace Module::SubModule::SubSubModule
{
    void deeply_nested_function()
    {
        std::cout << "Module::SubModule::SubSubModule::deeply_nested_function" << std::endl;
    }
}

int main()
{
    namespace ssm = Module::SubModule::SubSubModule;

    ssm::deeply_nested_function();
}