#include<stdio.h>//sum of all number
int main()
{
    int a1[5],b=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<5;i++)
    {
       b=b+a1[i];
    }printf("%d",b);
}