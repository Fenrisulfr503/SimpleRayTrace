#include "Vector3.h"
#include <math.h>


Vector3& Vector3::operator=(const Vector3& rhs)
{
    if(this != &rhs)
    {
        x = rhs.x; y = rhs.y; z = rhs.z;
    }

    return *this;
}

Vector3 Vector3::operator+(const Vector3& rhs)const
 {
 	return Vector3( x + rhs.x, y + rhs.y, z + rhs.z);
 }

Vector3 Vector3::operator-(const Vector3& rhs)const
 {
 	return Vector3( x - rhs.x, y - rhs.y, z - rhs.z);
 }

Vector3 Vector3::operator*(const Vector3& rhs)const
 {
 	return Vector3( x * rhs.x, y * rhs.y, z * rhs.z);
 }

Vector3 Vector3::operator/(const Vector3& rhs)const
 {
 	return Vector3( x / rhs.x, y / rhs.y, z / rhs.z);
 }

Vector3 Vector3::operator*(const float val)const
 {
     return Vector3( x * val, y * val, z * val);
 }

Vector3 Vector3::operator/(const float val)const
 {
     return Vector3( x / val, y / val, z / val);
 }


Vector3& Vector3::operator+=(const Vector3& rhs)
{
    x += rhs.x; y += rhs.y; z+= rhs.z;
    return *this;
}
Vector3& Vector3::operator-=(const Vector3& rhs)
{
    x -= rhs.x; y -= rhs.y; z -= rhs.z;
    return *this;
}
Vector3& Vector3::operator*=(const Vector3& rhs)
{
    x *= rhs.x; y *= rhs.y; z*= rhs.z;
    return *this;
}
Vector3& Vector3::operator/=(const Vector3& rhs)
{
    x /= rhs.x; y /= rhs.y; z /= rhs.z;
    return *this;
}

Vector3& Vector3::operator*=(const float val)
{
    x *= val; y *=val; z *= val;
    return *this;
}

Vector3& Vector3::operator/=(const float val)
{
    x /= val; y /=val; z /= val;
    return *this;
}

float Vector3::length()const
{
    return float(sqrt(x*x + y*y + z*z));
}



float dot(const Vector3& lhs, const Vector3& rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
}

Vector3 cross(const Vector3& lhs, const Vector3& rhs)
{
    return Vector3 (lhs.y * rhs.z - lhs.z * rhs.y,
        lhs.z * rhs.x - lhs.x * rhs.z,
        lhs.x * rhs.y - lhs.y * rhs.x);
}


Vector3 Normilize(const Vector3& v)
{
    return v / v.length();
}