#include<stdio.h>//convert string into integer array
#include<string.h>
int main()
{
    char a1[100];
    int b=0,a2[100];
    fgets(a1,sizeof a1,stdin);
    a1[strcspn(a1,"\n")]='\0';
    b=strlen(a1);
    for(int i=0;i<b;i++)
    {
        a2[i]=a1[i]-'0';
    }
    for(int i=0;i<b;i++)
    {
        printf("%d",a2[i]);
    }
}