#include <stdio.h>
int main()
//如果printf放在for循环中，会输出多个值，因为每次的和都会输出，如果放在外面，就会只输出一个值，即最后的和，但是所求的值不能超过极限值
{
	int factorial(int m);
	int i,n,sum=0;
	printf("please enter a number");
	for(i=1;i<=4;i++)
	{
		sum=sum+factorial(i); 
	printf ("%d\n",sum);
	}
	return 0;
}
int factorial(int m)
{
	//返回值为一的，阶乘为1或0
if(m==0||m==1)
	return 1;
else
    return n*factorial(m-1);
}

		