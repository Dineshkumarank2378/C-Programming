#include<stdio.h>//no of digit which are odd
int a,b,c;
int main()
{
    scanf("%d",&a);
    for(;a>0;a/=10)
    {
        b=a%10;
        if(b%2==1)
        {
            c++;
        }
    }printf("%d",c);
}