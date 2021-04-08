#include "cutvoxel.h"
#include <sculptor.h>

cutvoxel::cutvoxel(int x_,int y_,int z_, float r_,float g_, float b_,float a_)
{
    x=x_;
    y=y_;
    z=z_;
    r=r_;
    g=g_;
    b=b_;
    a=a_;

}
cutvoxel::~cutvoxel(){

}

void cutvoxel::draw(sculptor &t){
    t.setColor(r,g,b,a);
    t.cutVoxel(x,y,z);

}
