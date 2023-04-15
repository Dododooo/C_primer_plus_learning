#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 60
#define CONT 1000
int main(void)
{
    FILE *fp;
    int ch;
    char file[MAX];
    char content[CONT];
    int count=0;
    puts("Please enter file name ,I'll make it all upper(empty input to quit)");
    while(scanf("%s",file)==1&&file[0]!='\n')
    {
        if((fp=fopen(file,"r"))==NULL)
        {
            fprintf(stderr,"Can't open file %s",file);
            puts("Try again!");
            continue;
        }
        count=0;
        while((ch=getc(fp))!=EOF&& count <CONT)
        {
            if(isalpha(ch))
            {
                ch=tolower(ch);
            }
            content[count]=ch;
            count++;
        }
        fclose(fp);
        if((fp=fopen(file,"w"))==NULL)
        {
            fprintf(stderr,"Can't open file %s when writing",file);
            puts("Try again!");
            continue;
        }
        fputs(content,fp);
        rewind(fp);
        puts("Done!");
        puts("Here is the content of file");
        while((ch=getc(fp))!=EOF)
        {
            putchar(ch);
        }


        fclose(fp);
        printf("Have trans formed %d charactors",count);
        puts("Please enter another file name!");
    }

    puts("Bye!");

    return 0;
}