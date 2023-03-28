#include<stdio.h>
#include "hotel.c"


int main(void)
{
    int hotel_num;
    float t_price;
    int days;
    int single_price[]={10,15,20,30};

    printf("Please enter the days you stay and which hotel you want check\n");
    displayMenu();
    while(scanf("%d %d",&days,&hotel_num)==2)
    {
        switch(hotel_num)
        {
            case 1:
                {printf("%.2f",price(days,single_price[0]));
                break;}
            case 2:
                {printf("%.2f",price(days,single_price[1]));
                break;}
            case 3:
                {printf("%.2f",price(days,single_price[2]));
                break;}
            case 4:
                {printf("%.2f",price(days,single_price[3]));
                break;}
            default:
                {printf("invalid input\n");
                break;}
        }
        putchar('\n');
        printf("Please enter anther day or hotal youwant\n");
    }
    printf("bye\n");
}

