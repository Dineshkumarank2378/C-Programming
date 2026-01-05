/*Write a program to get a number from user and if the last digit
of the number is even print the same number. If the last digit of
the number is odd, then subtract 1 from the last digit and print
the number. (Note: Last digit -MSB)*/

#include <stdio.h>
int main()
{
    int n, a, c,last, d = 1,result;
    scanf("%d", &n);
    a = n;
    last = n % 10;
    if(last%2 == 0)
    {
     loop : if (a >= 10)
       { a = a / 10;
        d = d * 10;
        goto loop;
       }
       a=a-1;
       c=n%d;
       result=a*d+c;
       printf("%d",result);
    }
    else
    printf("%d",n);
}