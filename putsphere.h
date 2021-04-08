#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageografica.h"



class putsphere : public figurageografica
{
protected:
    int xcenter,ycenter,zcenter,radius;
    float r,g,b,a;
public:
    putsphere(int xcenter_,int ycenter_,int zcenter_,int radius_,float r_,float g_,float b_,float a_);
    ~putsphere();

    void draw(sculptor &t);
};

#endif // PUTSPHERE_H
