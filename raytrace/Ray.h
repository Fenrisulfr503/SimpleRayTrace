#pragma once

#include "Vector3.h"

class Ray
{
private:
    Vector3 origin;
    Vector3 direct;

public:
    Ray(/* args */);
    Ray(const Vector3& , const Vector3& );
    ~Ray();
    Vector3  Origin()const;
    Vector3  Direct()const;
    Vector3  PointAt(float);
};

