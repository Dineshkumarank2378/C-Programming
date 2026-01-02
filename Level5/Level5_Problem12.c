#include<stdio.h>//print sum of digit
int main()
{
    int x=0,y=0,z=0;
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
        z=x%10;
        y=y+z;
    }printf("%d",y);
   
}