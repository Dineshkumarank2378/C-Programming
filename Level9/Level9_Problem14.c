#include<stdio.h>//get number until o was input and print the sum of digit  and print in ascending order
int main()
{
    int a1[100],c=0,b=0,temp;
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
    for(int i=0;i<c;i++)
    {
       for(int j=a1[i];j>0;j/=10)
       {
        b=b+(j%10);
       }a1[i]=b;
       b=0;
    }
   for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if((a1[i]<a1[j]))
            {
               temp=a1[j];
               a1[j]=a1[i];
               a1[i]=temp;
            }
        }
    } for(int i=0;i<c;i++)
    {
        printf("%d ",a1[i]);
    }
}