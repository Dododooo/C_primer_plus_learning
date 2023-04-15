#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40
int main(int argc,char * argv[])
{
    FILE * in,*out;
    int ch;
    char name[LEN];
    int count=0;


    puts("Enter the name you want to reducted");
    while(scanf("%s",name)!=1&& name[0]!='\0')
    {
        fprintf(stderr,"Invalid input");
        continue;
        
    }
    if((in=fopen(name,"r"))==NULL)
    {
        fprintf(stderr,"I couldn't open the file\"%s\"\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    name[LEN-5]='\0';
    strcat(name,".red");
    if((out=fopen(name,"w"))==NULL)
    {
        fprintf(stderr,"Can't create output file.\n");
        exit(3);
    }
    while((ch=getc(in))!=EOF)
    {
        if(count++%3==0)
        putc(ch,out);
    }
    if(fclose(in)!=0||fclose(out)!=0)
    {
        fprintf(stderr,"Error in closeing files.\n");
    }

    return 0;



}