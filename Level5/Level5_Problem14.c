#include<stdio.h>//interchange the first and last digit
int main()
{
    int x=0,y=1,z=0;
    scanf("%d",&x);
    z=x%10;
    x=x/10;
    printf("%d",z);
    z=x;
   // printf("'%d'",z);
    for(;x>10;x=x/10)
    {
      y=y*10;
    } printf("%d%d",z%y,z/y);
   
}