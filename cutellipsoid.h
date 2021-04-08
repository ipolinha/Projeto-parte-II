#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageografica.h"


class cutellipsoid : public figurageografica
{
protected:
    int xcenter,ycenter,zcenter,rx,ry,rz;
    float r,g,b,a;
public:
    cutellipsoid(int xcenter_,int ycenter_,int zcenter_,int rx_,int ry_,int rz_,float r_,float g_,float b_,float a_);
    ~cutellipsoid();
    void draw(sculptor &t);

};


#endif // CUTELLIPSOID_H
