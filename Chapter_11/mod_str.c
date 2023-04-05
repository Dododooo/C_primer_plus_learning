#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define LIMIT 81
void ToUpper(char *);       //把每个字符大写
int PunctCount(const char *);    //统计字符串标点符号

int main(void)
{
    char line[LIMIT];
    char * find;
    puts("Please enter a line:");
    fgets(line,LIMIT,stdin);
    find=strchr(line,'\n');//查找换行符
    if(find)
    {
        *find='\0';//换成空字符
    }
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n",PunctCount(line));

    return 0;
}

void ToUpper(char *str)
{
    while(*str)
    {
        *str=toupper(*str);
        str++;
    }
}
int PunctCount(const char *str)
{
    int ct=0;
    while(*str)
    {
        if(ispunct(*str))
            ct++;
        str++;

    }
    return ct;
}

