#include "ppm.h"
#include "Vector3.h"
#include "Ray.h"
#include "Hitable.h"
#include "Sphere.h"
#include "HitableList.h"
#include "Camera.h"

#include <cstdlib>
#include <ctime>
#include <math.h>
#include <sstream>



Vector3 color(const Ray& r, Hitable* world)
{
    Hitrecord rec;
    if(world->hit(r, 0.0, 9999.f, rec))
    {
        return  Vector3(rec.N.x + 1, rec.N.y + 1, rec.N.z + 1) * 0.5;
    }
    else
    {
        Vector3 unit_dir = Normilize(r.Direct());
        float t =  0.5 * (unit_dir.y + 1.0);
        return Vector3(1.f,1.f,1.f) * (1.f-t)  + Vector3(0.5,0.7,1.f) * t;
    }
    


}

bool TestWritePpm()
{   
    std::srand(std::time(NULL));

    constexpr int width = 2000;
    constexpr int height = 1000;

    constexpr int sampleCounts = 50;
    PPm image("test", width,height);
    std::ostringstream str("");

    HitableVector hitList;
    hitList.push_back( new Sphere(Vector3(0,-100.5,-1), 100));
    hitList.push_back( new Sphere(Vector3(0,0,-1), 0.5));
    Hitable* world = new HitableList(hitList);

    Camera cam;

    for(int i = height-1; i >= 0 ; i--)
    {
        
        for(int j = 0; j < width; j++)
        {
            // Vector3 gatherCol(0.f, 0.f, 0.f);
            // for(int i = 0; i < sampleCounts; ++i)
            // {
                float v = (float(i)) / float(height);
                float u = (float(j)) / float(width);
                Ray r = cam.GetRay(u, v);
                Vector3 clr = color(r, world);
            //     gatherCol += clr;
            // }

            // gatherCol /= float(sampleCounts);

            str << int(255.55f * clr.x) << " " << int(255.55f * clr.y) << " " << int(255.55f * clr.z) << " ";

        }
        str << "\n";
    }

    image.AppendContent(str.str());

    return true;
}