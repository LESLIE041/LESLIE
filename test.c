#include<stdio.h>
int main()
{
int max(int x,int y);
int a,b,c;
printf ("please enter a,b:");
scanf("%d,%d",&a,&b);
c=max(a,b);
printf("max=%d\n",c);
return 0;
}
int max(int x,int y)
{
	if (x>y)
	return x;
	else
	return y;
}
                                  