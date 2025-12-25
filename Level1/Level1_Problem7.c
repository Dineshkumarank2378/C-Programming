#include <stdio.h>// reverse the 2 digit number
int main(void)
{
    int x,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=x%10;
    
    x=x/10;
    
    printf("Result=%d%d",y,x);
}
