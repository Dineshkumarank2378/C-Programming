#include<stdio.h>//total count of numbers which are less than 100000 and whose sum of digit is 14
int x,y,z,a,b;
int main()
{
    
    x=1;
    while(x<100000)
    {
       y=x;
       while(y>0)
       {
           a=(y%10)+a;
           y/=10;
       }if(a==14)
       {
        z++;
       }a=0;
       x++;
    }printf("%d",z);
}
