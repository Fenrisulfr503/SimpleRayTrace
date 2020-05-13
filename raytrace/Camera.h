#pragma once

#include "Ray.h"

class Camera
{

public:
    Camera(/* args */) : corner({-2.f, -1.f, -1.f}), 
        xlength({4.f, 0.f, 0.f}), 
        ylength({0.f, 2.f, 0.f}), 
        orig({0.f, 0.f, 0.f}) 
    {

    }
    
    Ray GetRay(float u, float v)
    {
        return Ray(orig, corner + xlength*u + ylength*v);
    }

    Vector3 corner;
    Vector3 xlength;
    Vector3 ylength;
    Vector3 orig;
};

