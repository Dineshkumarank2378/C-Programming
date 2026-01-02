#include<stdio.h>//print number of digit
int main()
{
    int x=0,y=0;
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
        y+=1;
    }printf("%d",y);
   
}