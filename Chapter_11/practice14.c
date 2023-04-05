#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char * argv[])
{

    
    float di;
    int zhi;
    int i;
    float result=1;

    di=atof(argv[1]);
    zhi=atoi(argv[2]);
    for(i=0;i<zhi;i++)
    {
        result*=di;
    }
    
    printf("%.2lf is the result\n",result);

    return 0;
}