#include"stdio.h"
#include"string.h"
int main(int argc,char *argv[])
{
 if(argc==4)
    while(argc>1)
    {
        printf("%s\n", *argv);
        argc--;
        *argv++;
    }
 else
     printf("error");
        

}
