#include<stdio.h>//prime or not
int main()
{
    int x=0;
    scanf("%d",&x);
    if(x==2)
   {
    printf("Prime");
    return 0;
   }
   for(int i=2;i<(x/2);i++)
   {
     if(x%i==0)
     {
        printf("Not Prime");
        return 0;
     }
   }printf("Prime ");
   return 0;
    
}