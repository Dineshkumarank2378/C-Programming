#include <stdio.h>//(digit 0 is less than digit 1)
int main(void)
{
    int x,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    if(y<x)
    {
        printf("1");
    }else
    {
        printf("0");
    }
    //printf("Reasult=%d",y);
}
