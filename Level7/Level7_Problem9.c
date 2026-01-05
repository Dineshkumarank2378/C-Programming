#include<stdio.h>//print 2digit number whose one's digit is 5
 void disp_2digit_ones5();
 int a=10,b,c,d;
int main()
{
    disp_2digit_ones5();
}
void disp_2digit_ones5()
{
    while(a<100)
    {
        b=a%10;
       if(b==5)
       {d=d+a; }
        a++;
    } printf("%d\n",d);
}