#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageografica.h"


class putvoxel: public figurageografica
{
protected:
    int x,y,z;
    float r,g,b,a;

public:
    putvoxel(int x_,int y_,int z_, float r_,float g_, float b_,float a_);
    ~putvoxel();

    void draw(sculptor &t);

};

#endif // PUTVOXEL_H
