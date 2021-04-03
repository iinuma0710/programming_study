#include <iostream>
#include <vector>

int main()
{
    std::vector v = { 0, 1, 2, 3, 4 };

    // コンテナ内の前要素に対し，偶数なら2で割る
    for (auto iter = v.rbegin(); iter != v.rend(); ++iter) {
        std::cout << *iter << std::endl;
    }
}