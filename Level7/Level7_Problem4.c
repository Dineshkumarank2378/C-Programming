#include<stdio.h>//print sum of 1 to 6
 void disp_rsum();
 int a,b,c;
int main()
{
    disp_rsum();
}
void disp_rsum()
{
    while(a<6)
    {
       a++;
       b=b+a;
    } printf("%d\n",b);
}