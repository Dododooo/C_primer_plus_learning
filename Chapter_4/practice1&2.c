#include <stdio.h>
#include <string.h>
int main(void)
{
    char f_name[20];
    char l_name[20];
    int f_width;
    int l_width;

    printf("Please enter your first name and lst name\n");
    scanf("%s %s",f_name,l_name);
    printf("\"%s,%s\"\n",f_name,l_name);
    printf("\"%20s,%20s\"\n",f_name,l_name);
    printf("\"%-20s,%-20s\"\n",f_name,l_name);
    f_width = strlen(f_name)+3;
    l_width = strlen(l_name)+3;
    printf("\"%*s,%*s\"\n",f_width,f_name,l_width,l_name);
    
    

    return 0;
}