#include<stdio.h>//smallest of all number
int main()
{
    int a1[5],b=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }b=a1[0];
    for(int i=0;i<5;i++)
    {
        
       if(a1[i]<b)
       {
        b=a1[i];
       }
    }printf("%d",b);
}