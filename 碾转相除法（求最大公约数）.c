#include"stdio.h"
int main()
{
    int a, b, c;
    printf("please enter two numbers:");
    scanf("%d,%d", &a, &b);
    while(b!=0)
    {
        c = a % b;a = b; c = b;
    }
    printf("%d\n", a);
    return 0;//最小公约数等于a*b/最大公约数。
}