#include<stdio.h>
int main()
{
    int i, j, k;
    for (i = 100; i <= 200; i++)
    {
        k = 1;
        for (j = 2; j <= i / 2;j++)//i/2的原因，2是最小的素数。
            if(i%j==0)
            k = 0;
        if(k)
            printf("%d\n", i);
    }
    return 0;
}