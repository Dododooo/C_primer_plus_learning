#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define COL 30
#define ROW 20
char switchar(int);
void proma(int (*matrix)[COL], int (*promatrix)[COL]);
int compare_nei(int row,int col,int (*matrix)[COL]);



int main(void)
{
    FILE * fp,*ifp;
    int matrix[ROW][COL];
    int pro_matrix[ROW][COL];
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
    proma(matrix,pro_matrix);


    for(row=0;row<ROW;row++)
    {
        for(col=0;col<COL;col++)
        {
            ch=switchar(pro_matrix[row][col]);
            image[row][col]=ch;
        }
        image[row][COL-1]='\n';
        image[row][COL]='\0';
    }


    puts("Processing complete!");
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


void proma(int (*matrix)[COL], int (*promatrix)[COL])
{
    int row,col;
    for(row=0;row<ROW;row++)
    {
        for(col=0;col<COL;col++)
        {

                promatrix[row][col]=compare_nei(row,col,matrix);

        }
    }

}


int compare_nei(int row,int col,int (*matrix)[COL])
{
    int value=matrix[row][col];
    int l,r,u,d;
    int ret_val=value;
    if(row==0&&col==0)
    {
        if(((r=matrix[row][col+1])-value>1)&&((d=matrix[row+1][col])-value>1))
            ret_val=(r+d+value)/3;           
    }else if(row==ROW-1&&col==0)
    {
        if(((u=matrix[row-1][col])-value>1)&&((d=matrix[row][col+1])-value>1))
            ret_val=(u+d+value)/3;
    }else if(row==0&&col==COL-1)
    {
        if(((l=matrix[row][col-1])-value>1)&&((d=matrix[row+1][col])-value>1))
            ret_val=(l+d+value)/3;
    }else if(row==ROW-1&&col==COL-1)
    {
        if(((l=matrix[row][col-1])-value>1)&&((u=matrix[row-1][col])-value>1))
            ret_val=(l+u+value)/3;
    }else if(row==0)
    {
        l=matrix[row][col-1];
        r=matrix[row][col+1];
        d=matrix[row+1][col];
        if(l-value>1&&r-value>1&&d-value>1)
            ret_val=(l+r+d+value)/4;
    }else if(row==ROW-1)
    {
        l=matrix[row][col-1];
        r=matrix[row][col+1];
        u=matrix[row-1][col];
        if(l-value>1&&r-value>1&&u-value>1)
            ret_val=(l+r+d+value)/4;
    }else if(col==0)
    {
        r=matrix[row][col+1];
        d=matrix[row+1][col];
        u=matrix[row-1][col];
        if(d-value>1&&r-value>1&&u-value>1)
            ret_val=(u+r+d+value)/4;                        
    }else if(col==COL-1)
    {
        l=matrix[row][col-1];
        d=matrix[row+1][col];
        u=matrix[row-1][col];
        if(d-value>1&&l-value>1&&u-value>1)
            ret_val=(u+l+d+value)/4;
    }else
    {
        l=matrix[row][col-1];
        d=matrix[row+1][col];
        u=matrix[row-1][col]; 
        r=matrix[row][col+1];
        if(d-value>1&&l-value>1&&u-value>1&&r-value>1)
            ret_val=(u+l+d+value+r)/5;               
    }
    return ret_val;
}
