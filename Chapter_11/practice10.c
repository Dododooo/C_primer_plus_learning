#include<stdio.h>
#include<string.h>
void del(char * st,int n)       //删除数组元素
{
    int i=0;
    for(i=n;i<strlen(st)-1;i++)
    {
        st[i]=st[i+1];
    }
    
}
char * del_space(char * st,int n)   //删除空格
{
    int i;
    char * ret_val;
    ret_val=st;
    for(i=0;i<n;i++)
    {
        if(st[i]==' ')
        {
            del(st,i);
        }
    }
    return ret_val;

}


int main(void)
{
    char st[30];
    int i;
    
    puts("Please enter strings(emptyline to quit)");
    while(fgets(st,30,stdin)!=NULL&&st[0]!='\n')
    {
        for(i=0;i<strlen(st);i++)
        {
            if(st[i]=='\n')
            {
                st[i]='\0';
            }
        }
        puts("Here is the string deleted spaces");
        puts(del_space(st,30));
        puts("Pleas enter another strings or quit");
    }
    puts("Bye!");

    return 0;
}