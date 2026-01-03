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
   int i=2;
   while(i<(x/2))
   {
     if(x%i==0)
     {
        printf("Not Prime");
        return 0;
     }
     i++;
   }printf("Prime ");
   return 0;
}
