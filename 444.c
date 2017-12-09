#include<stdio.h>
int main()
{
    int i;
    for (i = 100; i <= 200; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
            printf("%d\n", i);
     }
         printf("\n");
         return 0;
}
