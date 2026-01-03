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
    for(int i=c;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf(" %d\n", i);
            break;
        }
    }
    return 0;
}
