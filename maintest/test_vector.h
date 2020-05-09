#include "Vector3.h"


bool TestInizationVector3()
{

    bool state = true;

    Vector3 vec0{1, 2, 3};

    if(vec0.z > 3.001 && vec0.z < 2.999)
        state = false;

    Vector3 vec1 = vec0;
    if(vec1.z > 3.001 && vec1.z < 2.999)
        state = false;

    vec0 = vec0 + vec0;
    if(vec1.z > 6.001 && vec1.z < 6.999)
        state = false;

    // Temp Vector initizations
    Vector3 vecz;
    if(vecz.x != 0 )
        state = false;

    return state;
}

bool TestOperationVector3()
{
    bool state = true;

    Vector3 vec;
    vec += {1,0,0};

    float dotResult = dot(vec, {0,1,0});

    if(dotResult > 1.0001 && dotResult < 0.9999)
        state = false;

    Vector3 crossResult = cross(vec, {0,1,0});
    if(crossResult.z > 1.0001 && crossResult.z < 0.9999)
        state = false;

    return state;
}