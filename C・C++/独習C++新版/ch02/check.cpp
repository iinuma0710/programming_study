#include <iostream>

class vector3d {
    
public:
    using element_type = int;

    element_type get_x();
    void set_x(element_type X);

    element_type get_y();
    void set_y(element_type Y);
    
    element_type get_z();
    void set_z(element_type Z);

private:
    element_type x;
    element_type y;
    element_type z;

};

vector3d::element_type vector3d::get_x()
{
    return x;
}
void vector3d::set_x(element_type X)
{
    x = X;
}

vector3d::element_type vector3d::get_y()
{
    return y;
}
void vector3d::set_y(element_type Y)
{
    y = Y;
}

vector3d::element_type vector3d::get_z()
{
    return z;
}
void vector3d::set_z(element_type Z)
{
    z = Z;
}

vector3d set(vector3d::element_type x, vector3d::element_type y, vector3d::element_type z)
{
    vector3d v;
    v.set_x(x);
    v.set_y(y);
    v.set_z(z);

    return v;
}

vector3d set(vector3d::element_type x, vector3d::element_type y)
{
    return set(x, y, 0);
}

int main()
{
    int x, y, z;

    std::cout << "整数を3つ入力してください >";
    std::cin >> x >> y >> z;

    vector3d v;
    v.set_x(x);
    v.set_y(y);
    v.set_z(z);
}