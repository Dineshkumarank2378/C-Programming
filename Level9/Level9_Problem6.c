#include<stdio.h>// print descending order and same
int main()
{
    int a1[5],a2[5],b=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
        a2[i]=a1[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a1[i]>a1[j])
            {
               b=a1[j];
               a1[j]=a1[i];
               a1[i]=b;
            }
        }
    }for(int i=0;i<5;i++)
    {
        printf("%d ",a2[i]);
    }printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a1[i]);
    }
}