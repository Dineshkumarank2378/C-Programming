#include<stdio.h>//total no of 2 digit odd number
int x,y,z,a,b,c;
int main()
{
    scanf("%d",&x);
    for(;x>10;x/=10)
    {
        if((x%100)%2==1)
        {
            y++;
        }
    }printf("%d",y);
}