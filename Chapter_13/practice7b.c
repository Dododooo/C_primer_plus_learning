#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define CMAX 1000
#define RMAX 100

void reading(FILE * fp,char (*content)[CMAX]);


int main(void)
{
    FILE *fp1,*fp2;
    char name1[60];
    char name2[60];
    char content1[RMAX][CMAX];
    char content2[RMAX][CMAX];


    puts("Please enter first file's name");
    while(scanf("%s",name1)!=1 || name1[0]=='\n')
    {
        fprintf(stderr,"Invalid input");
        puts("Try again");
        continue;
    }
    if((fp1=fopen(name1,"r"))==NULL)
    {
        fprintf(stderr,"Can't open file %s",name1);
        exit(EXIT_FAILURE);
    }
    reading(fp1,content1);
    puts("Please enter second file's name");
    while(scanf("%s",name2)!=1 || name2[0]=='\n')
    {
        fprintf(stderr,"Invalid input");
        puts("Try again");
        continue;
    }
    if((fp2=fopen(name2,"r"))==NULL)
    {
        fprintf(stderr,"Can't open file %s",name2);
        exit(EXIT_FAILURE);
    }
    reading(fp2,content2);
    fclose(fp1);
    fclose(fp2);
    int fcount=0;

    for(int i=0;i<RMAX;i++)
    {
        if(content1[fcount][0]!='\0'&&content2[fcount][0]!='\0')
        {
            for(int i=0;i<strlen(content1[fcount])+1;i++)
            {
                if(content1[fcount][i]=='\n')
                    content1[fcount][i]='\0';
            }
            strcat(content1[fcount],content2[fcount]);
            puts(content1[fcount]);
            fcount++;
        }
    }

    return 0;


}


void reading(FILE * fp,char (* content)[CMAX])
{
    for(int row=0;row<RMAX;row++)
    {

        fgets(content[row],CMAX,fp);
    }
}