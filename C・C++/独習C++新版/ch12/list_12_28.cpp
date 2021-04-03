#include <iostream>
#include <set>

void print_set(const std::set<int>& l)
{
    for (auto it = l.begin(); it != l.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::set is = { 1, 1, 2, 2, 3, 3, 4 };
    print_set(is);

    is.insert(5);
    print_set(is);

    // 2 は挿入されない
    is.insert(2);
    print_set(is);
}