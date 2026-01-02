#include<stdio.h>//print sum from 1 to 6
int main()
{
    int x=1,y=0;
    for(int i=0;i<6;i++)
    {
        y=y+x;
        x++;
    }printf("%d\n",y);

}