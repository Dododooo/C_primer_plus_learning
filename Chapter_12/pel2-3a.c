#include<stdio.h>
#include<string.h>


double * get_info(int mode,double pt[])
{
    double s_kilo;
    double s_mile;
    double fuel_liter;
    double fuel_gallon;
    double * pt1;
    pt1=pt;

    char *str[]={"kilometers","miles"};
    char *str1[]={"liters","gallons"};
    if(mode>1)
        mode=1;
    printf("Enter distance traveled in %s:\n",str[mode]);
    if(mode==0)
    {
        while(scanf("%lf",&s_kilo)!=1)
        {
            puts("Please enter float values");
            puts("try again,you asshole!");
        }
        pt[0]=s_kilo;
    }
    if(mode==1)
    {
        while(scanf("%lf",&s_mile)!=1)
        {
            puts("Please enter float values");
            puts("try again,you asshole!");
        }
        pt[1]=s_mile;
    }
    while(getchar()!='\n')
    {
        continue;
    }

    printf("Enter fuel consumed in %s\n",str1[mode]);
        if(mode==0)
    {
        while(scanf("%lf",&fuel_liter)!=1)
        {
            puts("Please enter float values");
            puts("try again,you asshole!");
        }
        pt[2]=fuel_liter;
    }
    if(mode==1) 
    {
        while(scanf("%lf",&fuel_gallon)!=1)
        {
            puts("Please enter float values");
            puts("try again,you asshole!");
        }
        pt[3]=fuel_gallon;
    }

    while(getchar()!='\n')
    {
        continue;
    }

    return pt1;
}
void show_info(int mode,double * all)
{
    if(mode>1)
        mode=1;
    char *str[]={"kilometers","miles"};
    char *str1[]={"liters","gallons"};
    double US;
    double EURO;
    US=(double)all[2]/(double)all[0]*100.0;
    EURO=(double)all[3]/(double)all[1];
    printf("Fuel consumption is %lf  %s per%s%s\n",mode==0?US:EURO,str1[mode],mode==0?" 100":" ",str[mode]);
}
void set_mode(int mode)
{
    if(mode>1)
    {
        puts("Invalid mode specified,Mode1 (US)used\n");
        mode=1;
    }
        
}