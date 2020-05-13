#pragma once

#include "Ray.h"

struct  Hitrecord
{
    float t;
    Vector3 P;
    Vector3 N;
};


class Hitable
{

public:
    virtual bool hit(const Ray& r, float t_min, float t_max, Hitrecord& rec)const = 0;
};

