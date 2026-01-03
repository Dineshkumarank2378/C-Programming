#include<stdio.h>//print 2 digit even numbers whose sum is 6
int main()
{
    int x=10,y=0,z=0;
    int i=0;
    while(i<100)
    {
        y=x%10;
        z=x/10;

        if(y+z==6)
        {
            printf("%d\n",x);
        }x+=2;
        i++;
    }
}
