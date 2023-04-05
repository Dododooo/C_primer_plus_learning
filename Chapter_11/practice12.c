#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#define SIZE 80

int main(void)
{
    char st[SIZE];
    int w_count;
    int i=0;
    bool b=0;
    int Up_count,lower_count;
    int punct_count,num_count;
    w_count=Up_count=lower_count=punct_count=num_count=0;

    puts("Please enter a string:");

    if(fgets(st,SIZE,stdin)!=NULL&& st[0]!='\n')
    {
        
        for(i=0;i<strlen(st);i++)
        {
            if(st[i]==' ')
            {
                if(b==1||st[i]=='\n')
                {
                    w_count++;
                }
                b=0;
            }else
            {
                b=1;
            }
            if(isupper(st[i]))
                Up_count++;
            if(islower(st[i]))
                lower_count++;
            if(ispunct(st[i]))
                punct_count++;
            if(isnumber(st[i]))
                num_count++;

        }
    }
    printf("We got %d words\n%d upper characters\n%dlower charactors\n%d puncts\n%dnumbers\n",w_count,Up_count,lower_count,punct_count,num_count);
    puts("Bye!");
    return 0;
}
