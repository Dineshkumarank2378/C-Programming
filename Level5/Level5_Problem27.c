#include<stdio.h>//total count of numbers which are less than 100000 and whose sum of digit is 14
int x,y,z,a,b;
int main()
{
    
    for(x=1;x<100000;x++)
    {
       for(y=x;y>0;y/=10)
       {
           a=(y%10)+a;
       }if(a==14)
       {
        z++;
       }a=0;
    }printf("%d",z);
}