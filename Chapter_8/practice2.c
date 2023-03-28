#include<stdio.h>

int main()
{
    
    int ch;
    int index;

    for(index=0;(ch=getchar())!=EOF;index++)
    {
        if(index%10==0)
            putchar('\n');
        
        if(ch=='\t')
        {
            printf("\\t");
            continue;
        }
        if(ch=='\n')
        {
            printf("\\n");
            continue;
        }

            putchar(ch);
            printf("=%d ",ch);
        
    }


    printf("Done\n");

    return 0;
}