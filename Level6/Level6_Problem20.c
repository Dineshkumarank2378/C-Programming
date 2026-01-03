#include<stdio.h>//total number of single digit prime number
int x,y,z;
int main()
{
    x=2;
    int i=x;
    while(i<=9)
    {      
        int j=2;
        while(j<=i/2)
        {
           if(i%j==0)
           {
            z=1;
            break;
           }
           j++;
        }if(z==0){
         y++;
              }z=0;
        i++;
    }printf("%d",y);
}
