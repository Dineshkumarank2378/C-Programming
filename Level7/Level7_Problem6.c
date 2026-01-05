#include<stdio.h>//print 2digit odd number below 20
 void disp_2digit_odd_below20();
 int a=10,b,c;
int main()
{
    disp_2digit_odd_below20();
}
void disp_2digit_odd_below20()
{
    while(a<20)
    {
       if(a%2==1)
       { printf("%d\n",a);}
        a++;
    } 
}