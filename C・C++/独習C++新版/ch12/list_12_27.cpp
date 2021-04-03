#include <iostream>
#include <set>

int main()
{
    std::set is = { 3, 1, 0, 2, 4 };

    // 要素が照準に並んでいるので挿入位置は基本的に意味を持たない
    is.insert(is.end(), -1);

    // イテレータを与えなくても良い
    is.insert(-2);

    for (auto iter = is.begin(); iter != is.end(); ++iter) {
        std::cout << *iter << std::endl;
    }
}