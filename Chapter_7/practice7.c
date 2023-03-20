#include<stdio.h>
#define BASE 1000
#define ATIME 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25

int main(void)
{
    int hours;
    int paid;
    int paid_taxed;
    int tax;
    printf("Please enter hours  you work during aweek");
    scanf("%d",&hours);
    if (hours >40)
    {
        paid= (ATIME * (hours-40)+hours)*BASE;
    }else if(hours<=40 && hours>0)
    {
        paid = BASE *hours;
    }else
    {
        printf("in valid input\n");
    }
    if (paid<300)
    {
        tax=RATE1*paid;
        paid_taxed=paid-tax;
        
    }else if(paid <450)
    {
        tax=(300*RATE1+(paid-150)*RATE2);
        paid_taxed=paid-tax;
    }else
    {
        tax=(300*RATE1+150*RATE2+RATE3*(paid-450));
        paid_taxed=paid-tax;
    }
    printf("you got %d paid after cost %d tax,totallyis %d \n",paid_taxed,tax,paid);

    return 0;

}