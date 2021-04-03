#include <iostream>
#include <tuple>

int main()
{
    // クラステンプレートの型推論をさせる
    std::tuple t{std::string{"structured"}, 42, "binding"};

    auto [a, b, c] = t; // 構造化束縛，各要素のコピー

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << std::endl;

    auto& [x, y, z] = t; // 構造化束縛，各要素の参照

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << std::endl;

    x = "update";   // 要素を変更
    std::cout << std::get<0>(t) << std::endl;
}