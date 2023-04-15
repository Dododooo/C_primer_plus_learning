//pel2-2b.c
#include<stdio.h>
extern void set_mode(int mode);
extern void show_info(int mode,double * all);
double * get_info(int mode,double pt[]);


int main(void)
{

    int mode;
    double s_kilo;
    double s_mile;
    double fuel_liter;
    double fuel_gallon;
    double * pt;
    double all[4]={0,0,0,0};

    printf("Enter 0 for metric mode,1 for US mode: ");
    scanf("%d",&mode);
    while(mode>=0)
    {
        set_mode(mode);
        pt=get_info(mode,all);
        show_info(mode,pt);
        printf("Enter 0 for metric mode,1 for US mode");
        printf("(-1 to quit);");
        scanf("%d",&mode);
    }
    printf("Done.\n");
    return 0;
}
