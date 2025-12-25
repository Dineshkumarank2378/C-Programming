#include <stdio.h>//   10s digit is odd  sub 5
int main(void)
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    x=x-(((x/10)%2)*5);
    printf("Result=%d",x);
    //printf("%d",x%10);

}
