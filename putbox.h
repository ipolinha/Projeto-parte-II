#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageografica.h"


class putbox: public figurageografica
{
protected:
    int x0,x1,y0,y1,z0,z1;
    float r,g,b,a;
public:
    putbox(int x0_,int x1_,int y0_,int y1_,int z0_,int z1_,float r_,float g_,float b_,float a_);
    ~putbox();

    void draw(sculptor &t);

};

#endif // PUTBOX_H
