#include<stdio.h>//no of single digit perfect square
int x,y;
int main()
{
    scanf("%d",&x);
    for(;x>0;x/=10)
    {
        if((x%10==1)||(x%10==4)||(x%10==9))
        {
            y++;
        }
    }printf("%d",y);
}