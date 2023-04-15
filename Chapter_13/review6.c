#include<stdio.h>
#include<stdlib.h>
#define MAX 256

int main(int argc, char * argv[])
{
    char ch;
    FILE * fp;
    int count=0;
    char temp[MAX];

    if(argc!=3)
    {
        fprintf(stderr,"Usage:%s *char* *filename*",argv[0]);
        exit(EXIT_FAILURE);
    }else
    {
        if((fp=fopen(argv[2],"r"))==NULL)
        {
            fprintf(stderr,"Can't open %s file",argv[2]);
        }
    }
    ch=argv[1][0];
    while(fgets(temp,MAX,fp)!=NULL)
    {
        count++;
        char * pt=temp;
        while(*pt!='\0')
        {
            pt++;
            if(*pt==ch)
            {
                printf("Find %c in line %d",ch,count);
                puts(temp);
            }
        }
    }
    fclose(fp);
    puts("Done!");

    return 0;

}