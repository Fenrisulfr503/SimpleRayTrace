#pragma once

class Vector3
{

public:
	float x, y, z;

public:
	Vector3() : x(0), y(0), z(0) {}
	Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
	Vector3& operator+(const Vector3& t);

    void displayTable() const;

	Vector3& operator=(const Vector3& t);

};