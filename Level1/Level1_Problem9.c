#include <stdio.h>// reverse the last 2 digit in  4 digit number
int main(void)
{
    int x,y,z;
    printf("Enter the number : ");
    scanf("%d",&x);
     y=x;
     y=y/100;
     z=x%10;
     x=x/10;
    printf("Result=%d%d",y,z);
    printf("%d",x%10);

}
