#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int sp_num,ret_num,o_num;
    sp_num=ret_num=o_num=0;
    printf("Enter string(# to quit):\n");
    while((ch=getchar())!='#')
    {
        if(ch=='\n')
        {
            ret_num++;
            continue;
        }
        else if(ch==' ')
        {
            sp_num++;
            continue;
        }
        else
        {
            o_num++;
        }

    }
    printf("you entered %d return,%d space,%d other characitr",ret_num,sp_num,o_num);
    return 0;
}