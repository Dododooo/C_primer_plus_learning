#include<stdio.h>
#include<ctype.h>
void displayMenu(void);
char get_first(void);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);

int main(void)
{
    char ch;

    displayMenu();
    while((ch=get_first())!='q')
    {
        switch(ch)
        {
            case 'a':
            {
                add();
                break;
            }
            case 'b':
            {
                subtract();
                break;
            }
            case 'c':
            {
                multiply();
                break;
            }
            case 'd':
            {
                divide();
                break;
            }
        }
        printf("Please enter another operation\n");
        displayMenu();
        
    }
    printf("Bye!\n");
}

void displayMenu()
{
    int index;
    char ch;
    char *str[4]={"add","substract","multiply","devide"};
    for(index=0;index<40;index++)
    putchar('*');
    putchar('\n');
    printf("Please enter operation of your choice\n");
    for(ch='a';ch<'e';ch++)
    {
        printf("%5c) %-5s",ch,str[ch-97]);
        if(ch=='b'||ch=='d')
        putchar('\n');
    }
    printf("    q) quit\n");
    for(index=0;index<40;index++)
    putchar('*');
    putchar('\n');
}    

char get_first(void)
{
    int ch;
    
    while (isspace(ch=getchar()))
    {
        continue;
    }
    return ch;
}

void add(void)
{
    float arr[2]={1,1};
    char* str[2]={"first","second"};
    int index;
    char ch;
    for(index=0;index<2;index++)
    {
        printf("Enter %s number:",str[index]);
        while(!scanf("%f",&arr[index]))
        {
            while((ch=getchar())!='\n')
            {
                putchar(ch);
            }
            printf("is not a float number,please try again\n");
        }
    }
    printf("The result of %f +%f is %f",arr[0],arr[1],arr[0]+arr[1]);
    
}

void subtract(void)
{
    float arr[2]={1,1};
    char* str[2]={"first","second"};
    int index;
    char ch;
    for(index=0;index<2;index++)
    {
        printf("Enter %s number:",str[index]);
        while(!scanf("%f",&arr[index]))
        {
            while((ch=getchar())!='\n')
            {
                putchar(ch);
            }
            printf("is not a float number,please try again\n");
        }
    }
    printf("The result of %f -%f is %f",arr[0],arr[1],arr[0]-arr[1]);
    
}

void multiply(void)
{
    float arr[2]={1,1};
    char* str[2]={"first","second"};
    int index;
    char ch;
    for(index=0;index<2;index++)
    {
        printf("Enter %s number:",str[index]);
        while(!scanf("%f",&arr[index]))
        {
            while((ch=getchar())!='\n')
            {
                putchar(ch);
            }
            printf("is not a float number,please try again\n");
        }
    }
    printf("The result of %f X %f is %f",arr[0],arr[1],arr[0]*arr[1]);
    
}

void divide(void)
{
    float arr[2]={1,1};
    char* str[2]={"first","second"};
    int index;
    char ch;
    for(index=0;index<2;index++)
    {
        printf("Enter %s number:",str[index]);
        while(!scanf("%f",&arr[index])||(index==1&&((int)arr[index])==0))
        {
            if(index==1&&((int)arr[index])==0)
            {
                printf("Please don't enter 0 as divisor");
            }
            while((ch=getchar())!='\n')
            {
                putchar(ch);
            }
            printf("is not a float number,please try again\n");
        }
    }
    printf("The result of %.2f / %.2f is %.2f\n",arr[0],arr[1],arr[0]/arr[1]);
    
}