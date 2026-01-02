/*Write a program to get a number from user and if the last digit
of the number is even print the same number. If the last digit of
the number is odd, then subtract 1 from the last digit and print
the number. (Note: Last digit -MSB)*/
#include<stdio.h>
int main()
{
    int x=0,y=1,z=0;
    scanf("%d",&x);
    if(x%2==0)
   {printf("%d",x);
    return 0;
   }z=x;
    for(;x>10;x=x/10)
    {
      y=y*10;
    } printf("%d",z-y);
   
}