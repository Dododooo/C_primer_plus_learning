#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int ch;
    FILE *fp;
    unsigned long count=0;
    char files[80];

    puts("Please enter file name:");
    scanf("%s",files);

    if((fp=fopen(files,"r"))==NULL)
    {
        printf("Can't open %s\n",files);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp))!=EOF)
    {
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("\nFile %s has %lu characters\n",files,count);

    return 0;
}