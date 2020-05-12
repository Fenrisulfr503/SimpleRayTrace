#include "ppm.h"
#include "Vector3.h"
#include "Ray.h"
#include <sstream>

bool hitSphere(const Vector3& center, float radius, const Ray& r)
{
    Vector3 oc = r.Origin() - center;
    float a = dot(r.Direct(), r.Direct());
    float b = 2.0 * dot(oc, r.Direct());
    float c = dot(oc, oc) - radius * radius;

    float discriminant = b * b - 4 * a * c;

    return (discriminant > 0);

}

Vector3 color(const Ray& r)
{
    if(hitSphere(Vector3(0,0,-3), 0.5, r))
        return Vector3(1, 0, 0);

    Vector3 unit_dir = r.Direct() / r.Direct().length();
    float t =  0.5 * (unit_dir.y + 1.0);
    return Vector3(1,1,1) * (1-t)  + Vector3(0.5,0.7,1) * t;
}

bool TestWritePpm()
{   

    constexpr int width = 500;
    constexpr int height = 300;
    PPm image("test", width,height);
    std::ostringstream str("");

    Vector3 corner(-2, -1, -1);
    Vector3 xlength(4,0,0);
    Vector3 ylength(0,2,0);
    Vector3 orig(0,0,0);

    for(int i = height-1; i >= 0 ; i--)
    {
        float v = float(i) / float(height);
        for(int j = 0; j < width; j++)
        {
            float u = float(j) / float(width);
            Ray r = Ray(orig, corner + xlength*u + ylength*v);
            Vector3 clr = color(r);
            

            str << int(255.55f * clr.x) << " " << int(255.55f * clr.y) << " " << int(255.55f * clr.z) << " ";

        }
        str << "\n";
    }

    image.AppendContent(str.str());

    return true;
}