#include<stdio.h>//get number until o was input and print the sum of array
int main()
{
    int a1[100],c=0;
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a1[i]);
        c++;
        if(a1[i]==0)
        {
            c--;
            break;
        }
    }
   // printf("%d %d",a1[0],a1[c]);
    if(a1[0]==a1[c-1])
    {
       printf("Success");
    }
    else
    {
        printf("Failure");
    }
}