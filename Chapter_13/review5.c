#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 40

float avg(float * str);


int main(int argc,char * argv[])
{
    FILE * fp,*flst;
    long i;
    int count;
    long last;
    float f_str[MAX];
    for(int i=0;i<MAX;i++)
    {
        f_str[i]=0;
    }

    if(argc<2)
    {
        puts("Please enter floats(q to quit)");
        while(scanf("%f",&f_str[count])==1)
        {
            count++;
        }
        printf("%f is the average value",avg(f_str));
        return 0;

    }else if(argc>2)
    {
        fprintf(stderr,"Usage:%s *filename*\n",argv[0]);
    }else
    {
        if((fp=fopen(argv[1],"r"))==NULL)
        {
            fprintf(stderr,"Can't open file %s\n",argv[1]);
            exit(EXIT_FAILURE);
        }
    }
    count=0;
    while(!feof(fp)&&fscanf(fp,"%f",&f_str[count])==1)
    {
        count++;
    }
    if(count>0)
    {
        printf("%f is the average value of %d numbers",avg(f_str),count);
    }else{
        puts("There are no numbers in file");
    }

    fclose(fp);
    return 0;
}


float avg(float * str)
{
    float total=0;
    float avge=0;
    float count;
    for(int i=0;i<MAX;i++)
    {
        if(str[i]!=0)
        {
            count++;
        }
        total+=str[i];
    }
    avge=total/count;
    return avge;
}