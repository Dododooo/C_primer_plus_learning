#include<stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void)
{
    
    const float rain[YEARS][MONTHS]=
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {4.3,3.0,2.0,1.2,0.2,0.2,3.0,2.0,1.2,0.2,0.2,6.4},
        {0.2,0.4,2.4,3.5,6.6,4.3,4.3,4.3,3.0,2.0,1.2,9.2},
        {4.3,3.0,2.0,1.2,0.2,0.2,3.0,2.0,1.2,0.2,0.2,6.4},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}
    };

    int year;
    int month;

    float subtot;
    float total;

    printf("    YEAR    RAINFALL    (inches)\n");
    for(year=0,total=0;year<YEARS;year++)
    {
        for(month=0,subtot=0;month<MONTHS;month++)
        {
            subtot+=rain[year][month];
        }
        printf("%5d %15.1f\n",year+1,subtot);
        total+=subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n",total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf("JAN FEB MAR APR MAY JUN JUL AUG SEP OCT");
    printf(" NOV DEC\n");

    for(month=0;month<MONTHS;month++)
    {
        for(year=0,subtot=0;year<YEARS;year++)
        {
            subtot+=rain[year][month];
        }
        printf("%7.1f",subtot);
    }
    putchar('\n');

    return 0;

}