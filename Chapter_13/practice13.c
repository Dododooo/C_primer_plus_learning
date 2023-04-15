#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char switchar(int);

int main(void)
{
    int COL=30;
    int ROW=20;
    FILE * fp,*ifp;
    int matrix[ROW][COL];
    char image[ROW][COL+1];
    int row,col;
    char filename[60]="matrix";
    char imagname[60]="outimage";
    int ch,num;

    if((fp=fopen(filename,"r"))==NULL)
    {
        fprintf(stderr,"Can't open file %s\n",filename);
        exit(EXIT_FAILURE);
    }
    
    for(row=0;row<ROW;row++)
    {
        for(col=0;col<COL;col++)
        {
            fscanf(fp,"%d",&matrix[row][col]);
            ch=switchar(matrix[row][col]);
            image[row][col]=ch;
        }
        image[row][COL-1]='\n';
        image[row][COL]='\0';
    }
    puts("Finishing reading matrix,preocessing....");
    fclose(fp);
    if((ifp=fopen(imagname,"w"))==NULL)
    {
        fprintf(stderr,"Can't open file %s",imagname);
        exit(EXIT_FAILURE);
    }
    for(row=0;row<ROW;row++)
    {
        fputs(image[row],ifp);
    }
    puts("Done painting!");
    fclose(ifp);
    puts("closeing files,quiting....");

    return 0;






}

char switchar(int num)
{
    char ch;
    switch (num)
    {
    case 0:
        ch=' ';
        break;
    case 1:
        ch='.';
        break;
    case 2:
        ch='\'';
        break;
    case 3:
        ch=':';
        break;
    case 4:
        ch='~';
        break;
    case 5:
        ch='*';
        break;  
    case 6:
        ch='=';
        break;
    case 7:
        ch='&';
        break;
    case 8:
        ch='%';
        break;
    case 9:
        ch='#';
        break;
    
    default:
        ch=' ';
        break;
    }
    return ch;

}