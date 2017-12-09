#include"stdio.h"
#include"math.h"
float one(float i)
{
    float j;
    j = 2 * i + 3;
    return (j);
}
int main()
{
    //float (*p)(float);
    float a, b, t, sum, i;
    int n = 100;
    sum = 0;
    float h;
    printf("please enter a,b:");
    scanf("%f,%f", &a, &b);
    if(a<b)
    {
        t = a;
        a = b;
        b = t;
    }
   // p =one;
    h = (a - b) / n;
    for (i = b; i < a;i+=h)
    {
        sum = sum + (1.0 / 2.0) * (one(i) + one(i + h)) * h;//因为1/2为0.5，而1，2都为整型，0.5不算整型，所以就省略小数位，所以系统归为0；在1和2后面加上一位小数就好。
    }
    printf("%f\n", sum);
    return 0;
}