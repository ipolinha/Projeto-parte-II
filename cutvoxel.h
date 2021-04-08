#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageografica.h"


class cutvoxel: public figurageografica
{
protected:
    int x,y,z;
    float r,g,b,a;

public:
    cutvoxel(int x_,int y_,int z_, float r_,float g_, float b_,float a_);
    ~cutvoxel();

    void draw(sculptor &t);

};

#endif // CUTVOXEL_H
