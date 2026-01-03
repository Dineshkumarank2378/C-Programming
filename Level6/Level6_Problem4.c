#include<stdio.h>//print sum from 1 to 6
int main()
{
    int x=1,y=0;
    int i=0;
    while(i<6)
    {
        y=y+x;
        x++;
        i++;
    }printf("%d\n",y);
}
