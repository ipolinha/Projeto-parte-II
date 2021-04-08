#include "cutsphere.h"
#include <sculptor.h>

cutsphere::cutsphere(int xcenter_,int ycenter_,int zcenter_,int radius_,float r_,float g_,float b_,float a_)
{
    xcenter=xcenter_;
    ycenter=ycenter_;
    zcenter=zcenter_;
    radius=radius_;
    r=r_;
    g=g_;
    b=b_;
    a=a_;

}
cutsphere::~cutsphere()
{

}
void cutsphere::draw(sculptor &t)
{
    t.setColor(r,g,b,a);
    for(int i = xcenter-radius; i<xcenter+radius; i++){
        for(int j = ycenter-radius; j<ycenter+radius; j++){
            for(int k = zcenter-radius; k<zcenter+radius; k++){
                if(((i-xcenter)*(i-xcenter) + (j-ycenter)*(j-ycenter) + (k-zcenter)*(k-zcenter))<= (radius*radius)){
                    t.cutVoxel(i,j,k);
                }
            }
        }
    }

}
