#include"stdio.h"
int main()
{
    int factorial(int n);
    int i;
    printf("please enter a number");
    scanf("%d", &i);
    factorial(i);
    printf("%d\n", factorial(i));
    return 0;
}
int factorial(int n)
{
    int f;
    if(n<0)
        printf("error");
    if(n==0||n==1)
        f = 1;
    else
        f=n * factorial(n - 1);
    return(f) ;//返回值不能为0，要不结果就会为0.
}