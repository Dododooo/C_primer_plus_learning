#include<stdio.h>
#include<string.h>
int is_within(char * st,char ch)
{
    int index;
    int ret_val=0;
    for(index=0;index<strlen(st);index++)
    {
        if(st[index]==ch)
        {
            ret_val=1;
        }
    }
    return ret_val;
}

int main(void)
{
    char st[20];
    puts("Please enter strings(empty line to quit)");
    while(fgets(st,20,stdin)!=NULL&&st[0]!='\n')
    {
        if(is_within(st,'k'))
        {
            puts("k within");
        }else
        {
            puts("not king ");
        }
    }
    puts("Bye!");
    return 0;
}