#include<stdio.h>
#include<string.h>
int main()
{
    char st[20],ch;
    int count,l,i;
    printf("\n Enter the string :");
    scanf("%c",&ch);
    l = strlen(st);
    count = 0;
    for(i = 0; i < 1; i++)
    if(st[i] == ch)
    count++;
    printf("\n The character %c occurs %d times",ch,count);
    return 0;
}


