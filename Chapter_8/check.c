#include<stdio.h>
#include<stdbool.h>
long get_long(void);
bool bad_limits(long begin,long end,long low,long high);

double num_squares(long minRange,long maxRange);
int main(void)
{
    const long MIN = -100000000L;
    const long MAX = +100000000L;
    
    long start;
    long stop;

    double answer;
    printf("Enter");
    start = get_long();
    printf("Upper limit:%ld",start);
    stop= get_long();
    while(start !=0 ||stop !=0)
    {
        if(bad_limits(start,stop,MIN,MAX))
        {
            printf("please try again\n");
        }
        else
        {
            answer = num_squares(start,stop);
            printf("The sum of ,from %ld to %ld,is %g\n",start,stop,answer);
        
        }
        printf("E nter the limits (enter 0 for bothlimits to quit:\n");
        printf("lower limit:");
        start = get_long();
        printf("upper limit:");
        start =get_long();
    }
    printf("done");

    return 0;


}

long get_long(void)
{
    long input;
    char ch;
    while(scanf("%ld",&input)!=1)
    {
        while ((ch =getchar())!='\n')
        {
            putchar(ch);
        }
        printf("is not an integer.\nPlease enter an");
        printf("integer value ,such as 25,-178,or 3:");
    }
    return input;
}

double num_squares(long a,long b)
{
    double total=0;
    long i;
    for (i=a;i<=b;i++)
    {
        total+=(double)i * (double) i;

    }
    return total;
}

bool bad_limits(long begin,long end,long low,long high)
{
    bool not_good=false;
    if(begin>end)
    {
        printf("%ld isn't smaller than %ld.\n",begin,end);
        not_good=true;
    }
    if(begin<low||end <low)
    {
        printf("Values must be %ld or greater.\n",low);
        not_good=true;
    }
    if(begin>high||end>high)
    {
        printf("Values must be %ld or lower.\n",high);
        not_good= true;
    }
    return not_good;
}