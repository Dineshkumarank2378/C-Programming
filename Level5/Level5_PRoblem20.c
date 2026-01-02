#include<stdio.h>//total number of single digit prime number
int x,y,z;
int main()
{
    x=2;
    for(int i=x;i<=9;i++)
    {      
        for(int j=2;j<=i/2;j++)
        {
           if(i%j==0)
           {
            z=1;
            break;
           }
        }if(z==0){
         y++;
              }z=0;
       
    }printf("%d",y);
}