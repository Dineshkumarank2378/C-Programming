#include<stdio.h>//Validate tye number
#include<string.h>
int main()
{
   char a1[100];
   fgets(a1,sizeof a1, stdin);
   a1[strcspn(a1,"\n")]='\0';
    for(int i=0;a1[i]!='\0';i++)
    {
        if((a1[i]>=48)&&(a1[i]<58))
        {
            
        }else
        {
            printf("invalid");
            return 0;
        }
    }printf("valid");
   
}
