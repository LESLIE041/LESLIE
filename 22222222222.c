#include"stdio.h"
int main()
{
    int i, j, k;
    i = 0;
    j = 19;
    i++;
    k = i + --j;//j先自减，再和i相加/
    printf("%d", k);
    return 0;
}