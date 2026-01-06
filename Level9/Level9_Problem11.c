#include<stdio.h>//get number until o was input and print the sum of array
int main()
{
    int b=0,a1[100],c=0;
    scanf("%d",&b);
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a1[i]);
        c++;
        if(a1[i]==0)
        {
            break;
        }
    }
    for(int i=0;i<c;i++)
    {
       b=b+a1[i];
    }printf("%d",b);
}