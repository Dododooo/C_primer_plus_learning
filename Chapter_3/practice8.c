#include<stdio.h>
int main(void)
{
    float cup_num;
    float pinto;
    float angsi;
    float soupspoon;
    float teaspoon;
    printf("Please enter the num of cup:");
    scanf("%f",&cup_num);
    pinto = cup_num * 0.5;
    angsi = cup_num *8;
    soupspoon= angsi * 2;
    teaspoon = soupspoon *3;
    printf("%.0f cup = %.2f pinto = %.2f angsi=%.2f soupspoon=%.2fteaspoon\n",cup_num,pinto,angsi,soupspoon,teaspoon);
    return 0;
}