#include<stdio.h>
int main(void)
{
    int friend_num =5;
    int weeks;
    for(weeks=1;friend_num<150;weeks++)
    {
        friend_num-=weeks;
        friend_num*=2;
        printf("%-5d %-5d\n",weeks,friend_num);
    }
    return 0;
}