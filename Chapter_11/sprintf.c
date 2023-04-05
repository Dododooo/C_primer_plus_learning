#include<stdio.h>
#include<string.h>
#define MAX 20

#include "s_gets.c"

int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[MAX*2+10];
    double prize;

    puts("ENter your first name");
    s_gets(first,MAX);
    puts("Enter your last name");
    s_gets(last,MAX);
    puts("Enter your prize money:");
    scanf("%lf",&prize);
    sprintf(formal,"%s %-19s.$%6.2f\n",last,first,prize);
    puts(formal);

    return 0;
}
