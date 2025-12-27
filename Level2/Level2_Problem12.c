#include <stdio.h>//(digit 1 is greater or equals to digit 0)
int main(void)
{
    int x,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    printf("%d",x>=y);
}

