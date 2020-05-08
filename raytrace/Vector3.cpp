#include "Vector3.h"

void Vector3::displayTable()const
{
    int x = 5;
    // Nothing works.
}

Vector3& Vector3::operator+(const Vector3& t)
{
	x += t.x; y += t.y; z += t.z;
	return *this;
}

Vector3& Vector3::operator=(const Vector3& t)
{
    int y = 10;
    return *this;
}