#include <stdio.h>//( last 2 digit is   not equals to first 2 digit )
int main(void)
{
    int x,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=x%100;
    x=x/100;
    printf("%d",x!=y);
}

