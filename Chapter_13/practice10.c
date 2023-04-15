#include<stdio.h>
#include<stdlib.h>
#define MAX 255

int main(void)
{
    FILE *fp;
    char content[MAX];
    char filename[100];
    long loc;
    int ch;

    puts("Please enter the file name");
    if(scanf("%s",filename)!=1)
    {
        fprintf(stderr,"Invalid file name\n");
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(filename,"r"))==NULL)
    {
        fprintf(stderr,"Can't find file named %s\n",filename);
        exit(EXIT_FAILURE);
    }
    puts("File opened successfully");
    puts("Enter a location and I will locate it");
    while(scanf("%ld",&loc)==1&&loc>=0)
    {
        fseek(fp,loc,SEEK_SET);
        while((ch=getc(fp))!=EOF&&ch!='\n')
        {
            putchar(ch);
        }
        puts("Done");

        puts("Enter another location to continue or (input a non_number or a negetive number to quit)");

    }
    fclose(fp);
    puts("Bye!");

}