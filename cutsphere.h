#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageografica.h"



class cutsphere : public figurageografica
{
protected:
    int xcenter,ycenter,zcenter,radius;
    float r,g,b,a;
public:
    cutsphere(int xcenter_,int ycenter_,int zcenter_,int radius_,float r_,float g_,float b_,float a_);
    ~cutsphere();

    void draw(sculptor &t);
};

#endif // CUTSPHERE_H
