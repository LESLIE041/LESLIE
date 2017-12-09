#include"stdio.h"
int main()
{
    int *p;
    int a[] = {1, 7, 3, 4, 5, 6};
    p = &a[0];
    printf("%d\n", (*p)++);
    printf("%d\n", *p);
    return 0;
}