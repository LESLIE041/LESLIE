#include"stdio.h"
int main()
{
    int fun(int x,int y,int(*p)(int,int));
    int max(int,int);
    int min(int,int);
    int add(int,int);
    int n, a, b;
   // printf("please enter a,b:");
   // scanf("%d,%d", &a, &b);
   //在c语言中两个scanf不能放在一起，不会在同一个程序中一起输入，但不代表在c语言程序中不可以同时jin'xin进行两次输入。
    printf("please choose 1,2,3:");
    scanf("%d",&n);
    if(n==1)
    {
         printf("please enter a,b:");
         scanf("%d%d", &a, &b);//在输入时，在键盘中输入的格式应与scanf括号内双引号内的格式一致。
         fun(a,b,max);
    }
    if (n==2)
    { printf("please enter a,b:");
      scanf("%d%d", &a, &b);
      fun(a, b, min);
    }
    if (n==3)
    { printf("please enter a,b:");
      scanf("%d%d", &a, &b);
      fun(a,b,add);
    }
    return 0;
}
int  fun(int x,int y,int(*p)(int,int))
{
    int f;
    f = (*p)(x, y);
    return (f);
}
int max(int x,int y)
{
    int z;
    if(x>y)
        z = x;
    else
         z = y;
    printf("%d\n", z);
    return(z);
}
int min(int x, int y)
{
    int z;
    if (x > y)
        z = y;
    else
        z = x;
    printf("%d\n", z);
    return(z);
}
int add(int x,int y)
{
    int z;
    z = x + y;
    printf("%d\n", z);
    return(z);
}