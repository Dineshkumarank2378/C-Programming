#include <stdio.h>//sum of number in 3 digit number
int main(void)
{
    int x,y,z=0;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=x%10;
    z=z+y;
    x=x/10;
     y=x%10;
    z=z+y;
    x=x/10;
     y=x%10;
    z=z+y;
    x=x/10;
    printf("Result=%d",z);
}
