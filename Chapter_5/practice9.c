#include <stdio.h>
const float KAISHI=273.16;
void Temperature(double h);
int main(void)
{
    double huashi;
    int conf;
    printf("Please enter the huashi temp\n");
    conf =  scanf("%lf",&huashi);
    while(conf == 1)
    {   
        Temperature(huashi);
        printf("Enter another value or press'q' to leave\n");
        conf =  scanf("%lf",&huashi);
    }
    printf("Leaving");
    return 0;

}

void Temperature(double h)
{
    double sheshi = 5.0/9.0*(h-32.0);
    double kaishi = sheshi+ KAISHI;
    printf("%.2lf huashi = %.2lf sheshi = %.2lf kaishi\n",h,sheshi,kaishi);
    
}
