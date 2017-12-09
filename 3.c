#include"stdio.h"
int main()
{
   char str[5]={'c','h','i','n','a '};
   int i;
   for(i=0;i<5;i++)
   {
       str[i]=str[i]+4;
    }
   for(i=0;i<5;i++)
   printf("%s\n",str[i]);
   return 0;
} 