#include<stdio.h>
#include<string.h>

extern int mode;
extern double s_kilo;
extern double s_mile;
extern double fuel_liter;
extern double fuel_gallon;
static char *str[]={"kilometers","miles"};
static char *str1[]={"liters","gallons"};

void get_info(void)
{

    printf("Enter distance traveled in %s:",str[mode]);
    if(mode==0)
    {
        while(scanf("%lf",&s_kilo)!=1)
        {
            puts("Please enter float values");
            puts("try again,you asshole!");
        }
    }
    if(mode==1)
    {
        while(scanf("%lf",&s_mile)!=1)
        {
            puts("Please enter float values");
            puts("try again,you asshole!");
        }
    }
    printf("Enter fuel consumed in %s",str1[mode]);
        if(mode==0)
    {
        while(scanf("%lf",&fuel_liter)!=1)
        {
            puts("Please enter float values");
            puts("try again,you asshole!");
        }
    }
    if(mode==1) 
    {
        while(scanf("%lf",&fuel_gallon)!=1)
        {
            puts("Please enter float values");
            puts("try again,you asshole!");
        }
    }
        
}
void show_info(void)
{
    double US;
    double EURO;
    US=fuel_liter/s_kilo*100.0;
    EURO=fuel_gallon/s_mile;
    printf("Fuel consumption is %lf  %s per%s%s\n",mode==0?US:EURO,str1[mode],mode==0?"100":" ",str[mode]);
}
void set_mode(int mode)
{
    if(mode>1)
    {
        puts("Invalid mode specified,Mode1 (US)used\n");
        mode=1;
    }
        
}