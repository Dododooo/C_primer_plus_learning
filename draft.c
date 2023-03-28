#include<stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void)
{
    
    float rain[YEARS][MONTHS]=
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {4.3,3.0,2.0,1.2,0.2,0.2,3.0,2.0,1.2,0.2,0.2,6.4},
        {0.2,0.4,2.4,3.5,6.6,4.3,4.3,4.3,3.0,2.0,1.2,9.2},
        {4.3,3.0,2.0,1.2,0.2,0.2,3.0,2.0,1.2,0.2,0.2,6.4},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}
    };

    int year;
    int month;
    float (*ptr)[12];
    ptr=rain;
    float subtot;
    float total;


    printf("MONTHLY AVERAGES:\n\n");
    printf("JAN FEB MAR APR MAY JUN JUL AUG SEP OCT");
    printf(" NOV DEC\n");
    for(month=0;month<MONTHS;month++)
    {
        for(year=0,subtot=0;year<YEARS;year++)
        {
            ptr=(*(rain+year)+month);
            subtot+=**ptr;
        }
        // for(year=0,subtot=0;year<YEARS;year++)
        // {
        //     subtot+=*(*(ptr+year)+month);
        // }
        printf("%7.1f",subtot);
    }
    putchar('\n');

    return 0;

}