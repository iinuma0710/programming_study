#include <iostream>

struct vector2d
{
    int x;
    int y;
};

int sub(int right, int left)
{
    return right + left;
}

vector2d sub(vector2d left, vector2d right)
{
    vector2d v;
    v.x = left.x - right.x;
    v.y = left.y - right.y;
    return v;
}

int main()
{
    std::cout << sub(10, 20) << std::endl;

    vector2d a = {-10, 30};
    vector2d b = {5, 10};
    auto v = sub(a, b);
    std::cout << v.x << "," << v.y << std::endl;
}