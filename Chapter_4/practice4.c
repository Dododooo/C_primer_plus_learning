#include <stdio.h>
int main(void)
{
    char name[10];
    float height;

    printf("Please enter your name and your height\n");
    scanf("%s %f",name,&height);
    printf("%s,you are %.3f tall\n",name,height);

    return 0;
}