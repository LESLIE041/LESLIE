#include<stdio.h>
#define SUM 10000
int main()
{
 float amount,aver,total;
 int i;
 for(i=1,total=0;i<=10;i++)
 {
  printf("please enter amount:");
  scanf("%f",&amount);
  total=total+amount;
  if(total>=SUM)break;
 }
 aver=total/i;
 printf("num=%d\naver=%10.2f\n",i,aver);
 system("pause");
 return 0;
}
 

