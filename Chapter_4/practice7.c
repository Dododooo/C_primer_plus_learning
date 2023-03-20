#include <stdio.h>
#include <float.h>
int main(void)
{
    double num1 = 1.0/3.0;
    float num2= 1.0/3.0;

    printf("a: %.6f,%.6f\n",num1,num2);
    printf("b: %.12f,%.12f\n",num1,num2);
    printf("c: %.16f,%.16f\n",num1,num2);
    printf("extra: %d,%d\n",FLT_DIG,DBL_DIG);

    return 0;
}