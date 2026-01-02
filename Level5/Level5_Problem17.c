#include<stdio.h>//prime or not and sum of the digit is 14 or not
 int main()
{
    int x=0,y=0;
    scanf("%d",&x);
    if(x==2)
   {
    printf("Prime");
    goto loop;
   }
   for(int i=2;i<(x/2);i++)
   {
     if(x%i==0)
     {
        printf("Not Prime\n");
        goto loop;
     }
   }printf("Prime\n");
loop:for(;x>0;x=x/10)
{
    y=(x%10)+y;
}if(y==14)
{
    printf("sum of the digit is 14");
    return 0;
} 
    printf("sum of the digit is not 14");
}