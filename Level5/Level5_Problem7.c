#include<stdio.h>//print 2 digit odd numbers whose sum is 7
int main()
{
    int x=11,y=0,z=0;
    for(int i=0;i<100;i++)
    {
        y=x%10;
        z=x/10;

        if(y+z==7)
        {
            printf("%d\n",x);
        }x+=2;
    }

}