#include <stdio.h>//hcf of two numbers
int main()
{
    int a, b, temp;
    scanf("%d%d", &a, &b);
    for(;b>0;)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);
}