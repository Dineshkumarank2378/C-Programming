#include<stdio.h>//remove prime numbers and create new array and print
int main()
{
    int a1[5],a2[5],b=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a1[i]==1)
        {
            a2[b]=a1[i];
            b++;
        }
        else
        {
            for(int j=2;j<=a1[i]/2;j++)
            {  
                if(a1[i]%j==0)
                {
                     a2[b]=a1[i];
                     b++;
                    break;
                }
            }
        }
    }
        for(int i=0;i<b;i++)
        {
            printf("%d ",a2[i]);
        }
    
}