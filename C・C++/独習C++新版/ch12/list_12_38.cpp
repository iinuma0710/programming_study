#include <vector>
#include <iterator>
#include <list>
#include <algorithm>
#include <iostream>

int main()
{
    std::vector v = { 10, -3, 2, 0, -1, -5, 4, 2 };
    std::vector<int> c; // コピー先は空のままで良い

    // push_back() を使って順番にコピーしていく
    std::copy(v.begin(), v.end(), std::back_inserter(c));
    for (auto e : c) {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    // std::vector は push_front() を持たないので list を使う
    std::list<int> l;
    // push_front() を使って順番にコピーしていく
    std::copy(v.begin(), v.end(), std::front_inserter(l));
    for (auto e : c) {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    c = { 0, 0 };
    std::copy(v.begin(), v.end(), std::inserter(c, c.begin() + 1));
    for (auto e : c) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}