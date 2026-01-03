#include<stdio.h>//print sum of 2 digit numbers whose one's digit is 5
int main()
{
    int x=10,y=0,z=0;
    int i=0;
    while(i<90)
    {
        y=x%10;
        if(y==5)
        {
           z=z+x;
        }x+=1;
        i++;
    } printf("%d\n",z);
}
