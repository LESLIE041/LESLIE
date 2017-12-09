#include"stdio.h"
int main()
{
    int *p;
    int a[] = {1, 2, 3, 4, 5, 6};
    p = &a[0];
    printf("%d\n", *(p++));
    printf("%d\n", *p);//因为后置++，第一次输出的是没有加一的p，第二次循环输出的是加一之后的p。
    return 0;
}