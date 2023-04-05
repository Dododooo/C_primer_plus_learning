#include<stdio.h>
#include<string.h>
void displayMenu(void);
void displayString(char *st[]);
void * sort_ASCII(char *st[],int n);
void * sort_len(char *st[],int n);
void * sort_Wlen(char *st[],int n);
int F_wordlen(char*st);
int main(void)
{
    int choose=1;
    int i;
    int s;
    char str[10][40];
    char *st[10];

    puts("Please enter 10 strings");
    while(i<10&&fgets(str[i],40,stdin)!=NULL)
    {
        for(s=0;s<strlen(str[i]);s++)
        {
            if(str[i][s]=='\n')
                str[i][s]='\0';
        }
        st[i]=str[i];
        i++;
    }



    while(choose!=5)
    {

        displayMenu();
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:
            displayString(st);
            break;
        case 2:
            sort_ASCII(st,10);
            break;
        case 3:
            sort_len(st,10);
            break;
        case 4:
            sort_Wlen(st,10);
            break;
        case 5: 
            puts("Quiting...");       
        default:
            break;
        }

    }
    puts("bye!");

    return 0;
}

void displayMenu(void)
{
    int i;
    char * sel[]=
    {
        "Display strings","Sort strings as ASCII","Sort strings as length","Sort strings as first words","quit"
    };
    for(i=0;i<50;i++)
        putchar('*');
    putchar('\n');
    for(i=1;i<6;i++)
    {
        printf("%d)%-15s",i,sel[i-1]);
        if(i%2==1)
        {
            putchar('\n');
        }
    }
    for(i=0;i<50;i++)
        putchar('*');
    putchar('\n');
    puts("Please enter numbers");
}
void displayString(char *st[])
{
    int i;
    puts("this is the strings");
    for(i=0;i<50;i++)
        putchar('#');
    putchar('\n');
    for(i=0;i<10;i++)
    {
        puts(st[i]);
    }
}


void * sort_ASCII(char *st[],int n)
{
    int fast,slow;
    char * temp;
    for(slow=0;slow<n-1;slow++)
    {
        for(fast=slow+1;fast<n;fast++)
        {
            if(strcmp(st[fast],st[slow])<0)
            {
                temp=st[fast];
                st[fast]=st[slow];
                st[slow]=temp;
            }
        }
    }
    displayString(st);
}


void * sort_len(char *st[],int n)
{
    int fast,slow;
    char * temp;
    for(slow=0;slow<n-1;slow++)
    {
        for(fast=slow+1;fast<n;fast++)
        {
            if(strlen(st[fast])<strlen(st[slow]))
            {
                temp=st[fast];
                st[fast]=st[slow];
                st[slow]=temp;
            }
        }
    }
    displayString(st);

}
void * sort_Wlen(char *st[],int n)
{
    int fast,slow;
    int bool=0;
    char * temp;
    
    for(slow=0;slow<n-1;slow++)
    {
        for(fast=slow+1;fast<n;fast++)
        {
            if(F_wordlen(st[fast])>F_wordlen(st[slow]))
            {
                temp=st[fast];
                st[fast]=st[slow];
                st[slow]=temp;
            }
        }
    }
    displayString(st);
}

int F_wordlen(char*st)
{
    int bool=0;
    int index;
    int temp1=0,temp2;
    int distance=0;
    for(index=0;index<strlen(st);index++)
    {
        if(st[0]!=' ')
        {
            if(st[index]==' '||st[index+1]=='\0')
            {
                temp2=index;
                break;
            }
        }else
        {
            if(st[index]!=' ')
            {
                if(bool==0)
                {
                    temp1=index;
                }
                bool=1;
            }
            else
            {
                if(bool==1)
                {
                    temp2=index;
                    break;
                }
                bool=0;
            }
            
        }
    }
    distance=temp2-temp1;
    return distance;
}