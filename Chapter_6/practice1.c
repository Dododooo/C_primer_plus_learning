#include<stdio.h>
int main(void)
{
    char alphabet[26];
    int count;
    for (alphabet[0]='a',count=1;count<26;count++)
    {
        alphabet[count] = alphabet[count-1] + 1;
    }
    for (count=0;count<26;count++)
    {
        printf("%c\n",alphabet[count]);
    }

    return 0;
}