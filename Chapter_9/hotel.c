#include<stdio.h>
#include "hotel.h"

float price(int days,float s_price)
{
    float t_price=s_price;
    float pp;
    if(days>1)
    {
        t_price+= 0.95*price(days-1,s_price);
        return t_price;
    }
    else
        return s_price;
}



void displayMenu(void)
{
    int index;
    char *hotel_str[]={"HOTEL1","HOTEL2","HOTEL3","HOTEL4"};
    int single_price[]={10,15,20,30};
    for (index=0;index<40;index++)
    {
        putchar('*');
    }
    putchar('\n');

    for(index=0;index<4;index++)
    {
        printf("%d)%s:",index+1,hotel_str[index]);
        printf("$%-10.1d",single_price[index]);
        if(index%2!=0)
        {
            putchar('\n');
        }
    }
    printf("q)quit\n");
    
    for (index=0;index<40;index++)
    {
        putchar('*');
    }
    putchar('\n');

}