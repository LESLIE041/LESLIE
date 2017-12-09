#include"stdio.h"
int main()
{
    int i, sum, a[10];
    double averrage;
    printf("please enter 10 numbers:");
    for (i = 0; i <= 9;i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 9;i++)
        sum = 0;
    {
        sum = sum + a[i];
    }
    averrage = sum / 10;
    printf("%lf\n", averrage);
    return 0;
}