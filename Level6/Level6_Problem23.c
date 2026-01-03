#include<stdio.h>//no of single digit perfect square
int x,y;
int main()
{
    scanf("%d",&x);
    while(x>0)
    {
        if((x%10==1)||(x%10==4)||(x%10==9))
        {
            y++;
        }
        x/=10;
    }printf("%d",y);
}
