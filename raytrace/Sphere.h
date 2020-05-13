#pragma once

#include "Hitable.h"
#include <math.h>
class Sphere : public Hitable
{
public:
    Sphere(/* args */);
    Sphere(Vector3 c, float r) : center(c), radius (r) {}
    virtual bool hit(const Ray& r, float t_min, float t_max, Hitrecord& rec) const ;


    ~Sphere();

    Vector3 center;
    float radius;
};


bool Sphere::hit(const Ray& r, float t_min, float t_max, Hitrecord& rec)const
{
    Vector3 oc = r.Origin()  - center    ;
    float a = dot(r.Direct(), r.Direct());
    float b = 2.0f * dot(oc, r.Direct());
    float c = dot(oc, oc) - radius * radius;

    float discriminant = b * b - 4.0f * a * c;

    if(discriminant > 0)
    {
        float temp = (-b - sqrt(discriminant) ) / (2.0f * a);
        if(temp < t_max  && temp > t_min)
        {
            rec.t = temp;
            rec.P = r.Origin() + r.Direct() * temp;
            rec.N = (rec.P - center) / radius;
            return true;
         }
        temp = (-b + sqrt(discriminant) ) / (2.0f * a);
        if(temp < t_max  && temp > t_min)
        {
            rec.t = temp;
            rec.P = r.Origin() + r.Direct() * temp;
            rec.N = (rec.P - center) / radius;
            return true;
        }
    }
    return false;
}
 