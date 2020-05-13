#include "Ray.h"

Ray::Ray(/* args */) : origin(), direct()
{
}

Ray::~Ray()
{
}

Ray::Ray(const Vector3& _o, const Vector3& _d) : origin(_o), direct(_d)
{}

Vector3  Ray::Origin()const
{
    return origin;
}

Vector3  Ray::Direct()const
{
    return direct;
}

Vector3 Ray::PointAt(float t)
{
    return origin + direct * t;
}