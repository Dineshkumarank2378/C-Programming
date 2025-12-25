#include <stdio.h>//Last digit
int main(void)
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    x=x%10;
    printf("Result=%d",x);
}
