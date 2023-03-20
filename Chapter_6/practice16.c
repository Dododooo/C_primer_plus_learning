#include <stdio.h>
int main(void)
{
    double da_val;
    double de_val;
    int year;
    for(da_val=de_val=100,year=1;de_val<=da_val;year++)
    {
        da_val= 10.0 * year + 100.0;
        de_val*= 1.05;
        printf("%10d %10.2lf %10.2lf\n",year,de_val,da_val);
    }
    printf("It's gonna take %d years",year);
    
}