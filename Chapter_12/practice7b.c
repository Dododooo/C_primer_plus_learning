#include "diceroll.h"
#include <stdio.h>
#include<stdlib.h>
int roll_count=0;

static int rollem(int sides)
{
    int roll;

    roll=(rand()%sides +1);
    ++roll_count;
    return roll;

}

int roll_n_dice(int dice ,int sides)
{
    int d;
    int total=0;
    int subt,t;
    if(sides<2)
    {
        puts("Need at least 2 sides.\n");
        return -2;
    }
    if(dice<1)
    {
        puts("Need at least 1 die.\n");
        return -1;
    }
    printf("The reuslts are as below:\n");
    for(int i=0;i<sets;i++)
    {
        for(d=0,subt=0;d<dice;d++)
        {
            printf("%-3d",t=rollem(sides));
            subt+=t;
        }
        total+=subt;
        
        putchar('|');
    }  
    return total;

}