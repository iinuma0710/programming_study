#include <iostream>


class vector3d
{

private:
    float x;
    float y;
    float z;

public:
    vector3d();
    vector3d(float x, float y);    
    vector3d(float x, float y, float z);

};


vector3d::vector3d()
{
}

vector3d::vector3d(float x, float y) : x(x), y(y)
{
}

vector3d::vector3d(float x, float y, float z) : x(x), y(y), z(z)
{
}