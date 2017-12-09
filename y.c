#include"stdio.h"
#include"string.h"
int main()
{
    char *name[] = {"www", "eee", "rrr", "ttt"};
    char **p;
    p = name+2;
    printf("%d\n", *p);
    printf("%s\n", *p);//不用**p的原因是char**p是char*和*p两个部分，所以不存在**p,而*p是☞第三个元素，就是指指针数组的第三个指针。而只能在输出格式中写*p，而输出的格式决定输出内容。
    return 0;
}