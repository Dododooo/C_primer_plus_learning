#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;
    int B_count=0;
    int b_count=0;

    while ((ch=getchar())!=EOF)
    {
        if(isupper(ch))
        {
            B_count++;
        }
        if(islower(ch))
        {
            b_count++;
        }
        putchar(ch);
    }

    printf("the num of Upperis%d,The lower num = %d",B_count,b_count);

    return 0;
}