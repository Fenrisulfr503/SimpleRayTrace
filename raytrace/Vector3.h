#pragma once

class Vector3
{

public:
	Vector3() : x(0), y(0), z(0) {}
	Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
	Vector3(const Vector3& rhs) : x(rhs.x), y(rhs.y),z(rhs.z){}
	~Vector3(){}

	
	Vector3& operator=(const Vector3& rhs);

	Vector3 operator+(const Vector3& rhs)const;
	Vector3 operator-(const Vector3& rhs)const;
	Vector3 operator*(const Vector3& rhs)const;
	Vector3 operator/(const Vector3& rhs)const;
	Vector3 operator*(const float val)const;
	Vector3 operator/(const float val)const;

	Vector3& operator+=(const Vector3& rhs);
	Vector3& operator-=(const Vector3& rhs);
	Vector3& operator*=(const Vector3& rhs);
	Vector3& operator/=(const Vector3& rhs);
	Vector3& operator*=(const float val);
	Vector3& operator/=(const float val);

	float length()const;


public:
	float x, y, z;
};


float dot(const Vector3& lhs, const Vector3& rhs);
Vector3 cross(const Vector3& lhs, const Vector3& rhs);