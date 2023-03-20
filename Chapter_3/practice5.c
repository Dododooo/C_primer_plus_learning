#include <stdio.h>

int main(void)
{
    int age;
    long sec;
    printf("please enter your age:");
    scanf("%d",&age);
    sec = age * 3.156 * 10E7;
    printf("You have lived for %ld seconds\n",sec);
    printf("done");
    return 0;
}
