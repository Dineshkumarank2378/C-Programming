#include<stdio.h>//no of double digit perfect square
int x,y,z;
int main()
{
    scanf("%d",&x);
    for(;x>10;x/=10)
    {
        for(int i=1;i<10;i++)
        {
            if((x%100)==(i*i))
            {
               y++;
            }
        }
    }printf("%d",y);
}