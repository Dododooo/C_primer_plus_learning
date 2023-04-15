#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define CONTMAX 1000
#define FMAX 100
int countc(char * content,char ch);

int main(int argc,char *argv[])
{
    FILE *fp;
    char content[CONTMAX];
    char fname[FMAX];
    int ch;
    int fch;
    int count=0;
    ch=argv[1][0];
    if(argc<2)
    {
        fprintf(stderr,"Usage: %s *Charactor* *file name*",argv[0]);
        exit(EXIT_FAILURE);
    }else if(argc<3)
    {
        while(fgets(content,CONTMAX,stdin)!=NULL)
        {
            count=countc(content,ch);
            printf("the charactor %c appeared %d times",ch,count);
            puts("Done!");
            break;
        }
        
    }else
    {
        for(int i=2;i<argc;i++)
        {
            count=0;
            if((fp=fopen(argv[i],"r"))==NULL)
            {
                fprintf(stderr,"Can't open file %s,trying next file\n",argv[i]);
                continue;
            }
            strcpy(fname,argv[i]);
            while((fch=getc(fp))!=EOF)
            {
                if(fch==ch)
                count++;
            }
            printf("the charactor %c appeared %d times in file %s\n",ch,count,fname);
            puts("Done!");
            if(i!=argc-1)
            {
                puts("Reading next file...");
            }else
            {
                puts("All file searching complete");
            }

        }

    }
    puts("Program complete");
    return 0;
}




int countc(char * content,char ch)
{
    int count;
    for(int i=0;i<strlen(content);i++)
    {
        if(content[i]==ch)
            count++;
    }
    return count;
}