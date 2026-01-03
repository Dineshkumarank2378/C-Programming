#include<stdio.h>//no of digit which are odd
int a,b,c;
int main()
{
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        if(b%2==1)
        {
            c++;
        }
        a/=10;
    }printf("%d",c);
}
