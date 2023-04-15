#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41

int main(void)
{
    FILE *fp;
    char words[MAX];
    int wordc=0;
    char ch;
    char cont[MAX];
    char single[2];
    int i=0;

    if((fp=fopen("wordy","a+"))==NULL)
    {
        fprintf(stderr,"Can't open \"wordy\"file.\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the file ,press the #");
    puts("key at the beggining of a line to terminate");
    rewind(fp);
    while(fgets(cont,MAX,fp)!=NULL)
    {
        strncpy(single,cont,2);
        wordc=atoi(single);
    }
    while((fscanf(stdin,"%40s",words))==1&& (words[0]!='#'))
    {
        wordc++;
        fprintf(fp,"%d)%s\n",wordc,words);
        fflush(fp);
    }
    puts("File contens:");
    rewind(fp);
    while(fscanf(fp,"%s",words)==1)
        puts(words);
    if(fclose(fp)!=0)
    {
        fprintf(stderr,"Error closing file\n");
        exit(EXIT_FAILURE);
    }


    return 0;
}