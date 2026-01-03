#include<stdio.h>//from 4 digit number check the middle number is prime or not
int x,y,z;
int main()
{
    scanf("%d",&x);
    if((1000<=x)&&(x<=9999))
    {
        x=x/10;
        x=x%100;
       // printf("%d\n",x);
        if(x==2)
        {
            printf("prime");
        }else 
        {
            int i=2;
            while(i<(x/2))
            {
                if(x%i==0)
                {
                    printf("not prime");
                    return 0;
                }
                i++;
            }printf("Prime");
        }
    }
}
