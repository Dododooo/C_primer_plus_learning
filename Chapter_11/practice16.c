#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 80

int main(int argc , char * argv[])
{

    char str[SIZE];
    char * pt=str;
    int i=0;
    puts("Please enter strings");
    fgets(str,SIZE,stdin);
    if(strcmp(argv[1],"-u")==0)
    {
        for(i=0;i<strlen(str);i++)
        {
            pt[i]=toupper(str[i]);
        }
        puts(pt);
    }
    if(strcmp(argv[1],"-l")==0)
    {
        for(i=0;i<strlen(str);i++)
        {
            pt[i]=tolower(str[i]);
        }
        puts(pt);
    }


    if(argc==2||strcmp(argv[1],"-p")==0)
    {
        puts(pt);
    }

    
    return 0;

}