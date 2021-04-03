#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v)
{
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout<<std::endl;
}

int main()
{
    std::vector v = { 1, 5, 9 };

    // 先頭に 0 を挿入
    v.insert(v.begin(), 0);
    print_vector(v);

    // 末尾に 10 を挿入
    v.insert(v.end(), 10);
    print_vector(v);

    // 先頭から2番目の手前に2個の3を挿入
    v.insert(v.begin() + 2, 2, 3);
    print_vector(v);

    int ia[] = { 6, 7, 8 };
    // イテレータの指す範囲を挿入
    v.insert(v.end() - 2, ia, ia + 3);
    print_vector(v);
}