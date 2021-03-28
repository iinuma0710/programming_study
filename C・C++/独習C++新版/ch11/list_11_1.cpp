#include <iostream>
#include <typeinfo>

int main()
{
    // typeid 演算子は常に std::type_info への const 参照を返す
    const std::type_info& int_type = typeid(int);
    const std::type_info& one_type = typeid(1);

    if (int_type == one_type)
    {
        std::cout << "1 は int 型です" << std::endl;
    } else {
        std::cout << "1 は int 型ではありません" << std::endl;
    }

    const std::type_info& str_type = typeid("hoge");

    if (int_type != str_type)
    {
        std::cout << "\"hoge\" は int 型ではありません" << std::endl;
    } else {
        std::cout << "\"hoge\" は int 型です" << std::endl;
    }
}