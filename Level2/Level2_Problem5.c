#include <stdio.h>//(digit 0 is less than digit 1)
int main(void)
{
    int x,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    printf("%d",y<x);
}

