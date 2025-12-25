#include <stdio.h>// reverse the 3 digit number
int main(void)
{
    int x,y,z;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=x%10;   
    x=x/10;
    z=x%10;
    printf("Result=%d%d",y,z);
    printf("%d",x/10);

}
