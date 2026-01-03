#include<stdio.h>//print lcm of two numbers
int main()
{
    int a, b,c;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
    c=a;
    }
    else{
      c=b;
    }
    int i=c;
    while(i<=a*b)
    {
        if(i%a==0&&i%b==0)
        {
            printf(" %d\n", i);
            break;
        }
        i++;
    }
    return 0;
}
