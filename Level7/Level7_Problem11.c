#include<stdio.h>
void count_total_digits(int x);// print total number of digit
int main()
{
    int a;
    scanf("%d",&a);
    count_total_digits(a);
}
 void count_total_digits(int x)
{
    int b;
    for(;x>0;x/=10)
    {
      b++;
    }printf("%d",b);
}