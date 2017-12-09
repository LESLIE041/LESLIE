#include<stdio.h>
int main()
{
int max(int x,int y);
int min(int x,int y);
int a,b,c;
printf("请输入两个整数");
scanf("%d,%d",&a,&b);
c=max(a,b);
printf("max=%d",c);
return 0;
}
int max(int x,int y)
{int z;//定义第三变量，为的是可以在调用函数中通过改变形参的量，从而影响实参的值。
if (x>y)
	z=x;
else z=y;
return(z);//注意实参和形参之间的单向“值传递”，如果在函数调用中存在返回值，那么就可以因形参的改变影响到实参的值。
}
int min(int x,int y)
{int z;
	if(x<y)
	z=x;
else z=y;
return (z);
}