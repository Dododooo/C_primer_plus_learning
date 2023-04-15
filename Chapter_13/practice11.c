#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 255

int main(int argc,char * argv[])
{
    FILE *fp;
    int count=0;
    char content[MAX];
    char filename[50];

    if(argc<3)
    {
        fprintf(stderr,"Usage : %s *string* *filename*",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(argv[2],"r"))==NULL)
    {
        fprintf(stderr,"Can't open file %s",argv[2]);
        exit(EXIT_FAILURE);
    }
    strcpy(filename,argv[2]);

    while(fgets(content,MAX,fp)!=NULL)
    {
        if(strstr(content,argv[1])!=NULL)
        {
            puts(content);
            count++;
        }
    }
    printf("Have found %d \"%s\" in file %s\n",count,argv[1],filename);

    return 0;
}