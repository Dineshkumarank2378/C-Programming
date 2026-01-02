#include<stdio.h>//print reverse of the number
int main()
{
    int x=0;
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
      printf("%d",x%10);
    }
   
}