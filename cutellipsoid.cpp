#include "cutellipsoid.h"
#include <sculptor.h>

cutellipsoid::cutellipsoid(int xcenter_,int ycenter_,int zcenter_,int rx_,int ry_,int rz_,float r_,float g_,float b_,float a_)
{
    xcenter=xcenter_;
    ycenter=ycenter_;
    zcenter=zcenter_;
    rx=rx_;
    ry=ry_;
    rz=rz_;
    r=r_;
    g=g_;
    b=b_;
    a=a_;
}
cutellipsoid::~cutellipsoid(){

}
void cutellipsoid::draw(sculptor &t){
    t.setColor(r,g,b,a);
    for(int i = xcenter-rx; i<=xcenter+rx; i++)
    {
        for(int j = ycenter-ry; j<=ycenter+ry; j++)
        {
            for(int k = zcenter-rz; k<=zcenter+rz; k++)
            {
                if((((float)((i-xcenter)*(i-xcenter))/(float)(rx*rx))+((float)((j-ycenter)*(j-ycenter))/(float)(ry*ry))+((float)((k-zcenter)*(k-zcenter))/(float)(rz*rz)))<=1.0){
                    t.cutVoxel(i,j,k);

                }
            }
        }
    }
}
