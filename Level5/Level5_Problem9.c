#include<stdio.h>//print sum of 2 digit numbers whose one's digit is 5
int main()
{
    int x=10,y=0,z=0;
    for(int i=0;i<90;i++)
    {
        y=x%10;
        if(y==5)
        {
           z=z+x;
        }x+=1;
    } printf("%d\n",z);

}