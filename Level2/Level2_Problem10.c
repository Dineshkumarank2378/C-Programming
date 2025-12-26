#include <stdio.h>//( digit 0 and digit 1 are  not identical)
int main(void)
{
    int x,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    if(x!=y)
    {
        printf("1");
    }
    else{
        printf("0");
    }
    //printf("Reasult=%d",y);
}
