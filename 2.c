#include"stdio.h"
#include"math.h"
int main()
{
    int i, p;
    for (i = 1; i <= 30; i++)
    {
        p = pow(2, (i - 1));
        if (i > 30)
            continue; //在使用continue语句时，应有判断语句。记得在循环中打输出语句，为的是将循环的值输出，如果在循环外面打输出语句，就只会输出第三十次循环的值。   
    printf("%d\n", p);
    }
    return 0;
}