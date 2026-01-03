#include<stdio.h>//print sum of digit
int main()
{
    int x=0,y=0,z=0;
    scanf("%d",&x);
    while(x>0)
    {
        z=x%10;
        y=y+z;
        x=x/10;
    }printf("%d",y);
}
