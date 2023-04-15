#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000

int main(int argc,char * argv[])
{
    FILE * fps,*fpt;
    char content[MAX];
    for(int i=0;i<MAX;i++)
    {
        content[i]=0;
    }

    if(argc!=3)
    {
        fprintf(stderr,"Usage: %s *sourcefile* *targetfile*",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fps=fopen(argv[1],"rb"))==NULL)
    {
        fprintf(stderr,"Can't open file %s",argv[1]);
        exit(EXIT_FAILURE);
    }
    fread(content,sizeof(char),MAX,fps);
    for(int i=0;i<MAX;i++)
    {
        if(content[i]=='\0')
        {
            content[i+1]='\0';
            break;
        }
    }
    fclose(fps);
    if((fpt=fopen(argv[2],"wb"))==NULL)
    {
        fprintf(stderr,"Can't open file %s",argv[2]);
        exit(EXIT_FAILURE);
    }
    fwrite(content,sizeof(char),MAX,fpt);
    fclose(fpt);
    puts("Done!");

    return 0;



}