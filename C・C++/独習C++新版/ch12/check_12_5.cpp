#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector iv = {0, 1, 0, 2, 0, 3};

    auto count = std::count(iv.begin() + 1, iv.end(), iv[0]);
    
    std::cout << "コンテナの先頭の要素と同じ要素は " << count << " 個あります" << std::endl;
}