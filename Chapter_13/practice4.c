#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char * argv[])
{
    FILE * fp;
    int ch;
    int count;
    char file[60];
    
    puts("here are all files contents");
    
    for(int i=1;i<argc;i++)
    {

        strcpy(file,argv[i]);
        if((fp=fopen(argv[i],"r"))==NULL)
        {
            fprintf(stderr,"can't open file %s\n",file);
            puts("opening next file");
            continue;
        }
        while((ch=getc(fp))!=EOF)
        {
            putchar(ch);
        }
        fclose(fp);
        puts("Done");
        if(i!=argc-1)
            puts("Next file:");
        putchar('\n');

    }
    puts("bye!");
    return 0;

}