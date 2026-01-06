#include<stdio.h>//get string and print it
#include<string.h>
int main()
{
     char a1[100];
    // scanf("%c",&a1[0]);
     fgets(a1,sizeof a1,stdin);
     a1[strcspn(a1,"\n")]='\0';
     printf("%s",a1);

}    