//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>

int main()
{
    int a,b=1,c;
    scanf("%d", &a);
    printf("%d",a%10);
    a=a/10;
    c=a;
    loop:if(a>10)
    {
        b=b*10;
        a=a/10;
        goto loop;
    }printf("%d%d",c%b,c/b);

}