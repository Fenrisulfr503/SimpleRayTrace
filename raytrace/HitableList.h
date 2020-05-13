#pragma once
#include "Hitable.h"
#include <vector>

using HitableVector = std::vector<Hitable*>;

class HitableList : public Hitable
{

public:
    HitableList(/* args */);
    HitableList(HitableVector l) : list(l){}
    virtual bool hit(const Ray& r, float t_min, float t_max, Hitrecord& rec) const ;

    HitableVector list;

};

bool HitableList::hit(const Ray& r, float t_min, float t_max, Hitrecord& rec) const 
{
    Hitrecord temp_rec;
    bool hit_anything = false;
    float close_top_far = t_max;
    for(auto item : list )
    {
        if (item->hit(r, t_min, t_max, temp_rec))
        {
            hit_anything = true;
            close_top_far = temp_rec.t;
            rec = temp_rec;
        }
    }
    return hit_anything;

}
