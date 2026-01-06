#include<stdio.h>//remove all leading zeros
#include<string.h>
int main()
{
     char a1[100];
     int b=0,c;
    // scanf("%c",&a1[0]);
     fgets(a1,sizeof a1,stdin);
     a1[strcspn(a1,"\n")]='\0';
     b=strlen(a1);
     for(int i=0;i<b-1;i++)
     {
        if(a1[i]!=48)
        {
            c=i;
            break;
        }
     }for(int i=c;a1[i]!='\0';i++)
     {
        printf("%c",a1[i]);
     }
     
}   