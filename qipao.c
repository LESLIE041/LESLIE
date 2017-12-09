#include<stdio.h>
int main()
{
int a[10];
int i,j,t;
printf("please enter 10 numbers:\n");
for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("\n");
for(j=0;j<9;j++)//这里是指起泡排序的循环次数，一个气泡排序的过程中，最多（n-）次循环
for(i=0;i<9-j;i++)//每次外循环都会确定一个最大值，因此每次外循环结束后都会减少一次比较，因此每次外循环结束后都会减少一次内循环。
	if(a[i]>a[i+1])
	{t=a[i],a[i]=a[i+1],a[i+1]=t;}
	printf ("please the sorted numbers:\n");
	for (i=0;i<10;i++)
		printf ("%d\n",a[i]);
	return 0;
}
	

	

	
