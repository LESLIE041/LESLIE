#include"stdio.h"
#include"math.h"
int main()
{
     long int d,p;
     float r,m;
     d=300000;
     p=6000;
     r=0.01;
     m=(log (p)-log(p-d*r))/log(1+r);
     printf("please out months:%5.1f\n",m);
     return 0;
}