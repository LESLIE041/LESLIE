#include"stdio.h"
#include"math.h"
int main() 
{
    double a, b, c, x1, x2, d;
    printf("please enter three numbers");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    d = pow(b, 2) - 4 * a * c;//pow代表着平方
    if(d==0)//注意if判断式的格式，if......else
    {
        x1 = -b / (2*a);
        x2 = x1;
        printf("%lf,%lf\n", x1, x2);
    }
    else if(d>0)
    {
            x1 = (-b - sqrt(d)) / (2 * a); //sqrt代表着开方   
            x2 = (-b + sqrt(d)) / (2 * a); //注意符号的计算顺序，记得括号，对于if，两行以上要加括号，一行忽略，而且，括号后面一般不加分号。
            printf("%lf,%lf\n", x1, x2);
    }
    else
    {
        printf("error");
    }
    
    return 0;
} 