#include<stdio.h>//print number of digit
int main()
{
    int x=0,y=0;
    scanf("%d",&x);
    while(x>0)
    {
        y+=1;
        x=x/10;
    }printf("%d",y);
}
