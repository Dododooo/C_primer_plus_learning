#include <stdio.h>
int main(void)
{
    int ch;
    char ch2;
    printf("please enter the num you want to transform to charactor:\n");
    scanf("%d",&ch);
    printf("please enter the charctor you want to transform to num:\n");
    while (getchar () != '\n');
    scanf("%c",&ch2);
    printf("ch = %c, ch2 = %o \n",ch,ch2);
    return 0;
   
}