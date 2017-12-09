#include"stdio.h"
#include"string.h"
int main()
{
    int i, j;
    char *string[];
    printf("please enter :");
    for (i = 0; i < 7;i++)
        scanf("%s\n",string[i]);
    for (i = 0; i <7;i++)
        for(j = i + 1; j < 8;j++)//选择排序
        if(strcmp(string(i), string(j)) > 0)
            strcpy(string(i), string(j));
            for (i = 0; i < 8; i++)
                printf("%s\n", *string[i]);
            return 0;
}