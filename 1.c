#include"stdio.h"
#include"math.h"
int main()
{
    int n;
    double r,p;
    printf("please enter r,n:");
    scanf("%lf,%d", &r, &n);
    p = pow((1 + r), n);//代表（1+r）的n次方。
    printf("%lf", p);
    return 0;
}
