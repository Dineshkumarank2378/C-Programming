#include<stdio.h>//no of double digit perfect square
int x,y,z;
int main()
{
    scanf("%d",&x);
    while(x>10)
    {
        int i=1;
        while(i<10)
        {
            if((x%100)==(i*i))
            {
               y++;
            }
            i++;
        }
        x/=10;
    }printf("%d",y);
}
