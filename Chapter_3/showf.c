#include <stdio.h>
int main(void)
{
    float aboat = 32000.0f; //32000.0存储为double,可能会导致精度丢失
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e\n",aboat,aboat);
    printf("%f can be written %e\n",abet,abet);
    printf("And it's %a in hexadecimal,powers of 2 notation\n",aboat);
    printf("%Lf can be written %Le\n",dip,dip);
    return 0;
}