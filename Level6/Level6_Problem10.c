#include<stdio.h>//print sum of 2 digit odd numbers whose ten's digit is 7
int main()
{
    int x=11,y=0,z=0;
    int i=0;
    while(i<90)
    {
        y=x/10;
        if(y==7)
        {
           z=z+x;
        }x+=2;
        i++;
    } printf("%d\n",z);
}
