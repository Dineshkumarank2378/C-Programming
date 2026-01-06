#include<stdio.h>//remove even numbers and create new array and print
int main()
{
    int a1[5],a2[5],b=0;;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a1[i]%2==1)
        {
            a2[b]=a1[i];
            b++;
        }
    }
        for(int i=0;i<b;i++)
        {
            printf("%d ",a2[i]);
        }
    
}