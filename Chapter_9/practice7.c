#include<stdio.h>
#include<ctype.h>
int retChar(void)
{
    char ch;
    int loc;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            printf("It is an alpha %c\n",ch);
            if(islower(ch))
            {
                loc=ch-'a'+1;
            }
            if(isupper(ch))
            {
                loc=ch-'A'+1;
            }
            printf("Location:%d\n",loc);
        }
    }
    return -1;
}
int main(void)
{
    retChar();
    return 0;
}