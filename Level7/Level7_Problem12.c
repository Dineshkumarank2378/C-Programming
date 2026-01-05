#include<stdio.h>
void disp_sum_all_digits(int x);// print sum of all digit
int main()
{
    int a;
    scanf("%d",&a);
   disp_sum_all_digits(a);
}
 void disp_sum_all_digits(int x)
{
    int b;
    for(;x>0;x/=10)
    {
      b=(x%10)+b;
    }printf("%d",b);
}