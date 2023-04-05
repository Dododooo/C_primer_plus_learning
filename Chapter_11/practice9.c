#include<stdio.h>
#include<string.h>
char * reverse(char * st)
{
    int i;
    char * pt;
    char temp[strlen(st)];
    strcpy(temp,st);
    for(i=0;i<strlen(st);i++)
    {
        st[i]=temp[strlen(temp)-i-1];
    }
    // st[strlen(st)-1]='\0';
    return st;
}

int main(void)
{
    char st[20];

    puts("Please enter strings(emptyto quit)");
    while(fgets(st,20,stdin)!=NULL&&st[0]!='\n')//这里用教材给的s_gets()会更好一点，不会输出的时候有两个转行
    {
        puts(reverse(st));
    }


    return 0;
}