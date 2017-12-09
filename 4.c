#include"stdio.h"
#include"math.h"
#define PI 3.14
int main()
{
    float r,h,l,s1,s2,v1,v2;
    r=1.5;
    h=3.0;
    l=2*PI*r;
    s1=PI*r*r;
    s2=4*PI*r*r;
    v1=4*PI*r*r*r/3;
    v2=PI*r*r*h;
    printf("圆的周长=%5.2f\n,圆面积=%5.2f\n,圆球表面积=%5.2f\n,圆球体积=%5.2f\n,圆柱体积=%5.2f\n",l,s1,s2,v1,v2);
    return 0;
}
   