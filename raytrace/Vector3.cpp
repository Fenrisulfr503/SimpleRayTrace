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


 float Vector3::length()const
 {
     return static_cast<float>(sqrt(x*x + y*y + z*z));
 }