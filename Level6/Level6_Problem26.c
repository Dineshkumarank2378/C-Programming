#include<stdio.h>//print biggest 4 digit which divisible by 7 and 9
int x,y;
int main()
{
    x=9999;
    while(x>0)
    {
        if((x%9==0)&&(x%7==0))
        {
            printf("%d",x);
            return 0;
        }
        x--;
    }
}
