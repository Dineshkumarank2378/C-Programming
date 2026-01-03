#include<stdio.h>//lcm of three numbers
int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
       if(a>c)
        max=a;
       else
        max=c;
    }else
    {
        if(b>c)
        max=b;
        else
        max=c;
    }
    int i=max;
    while(i<=(a*b*c))
    {
        if((i%a==0)&&(i%b==0)&&(i%c==0))
        {
            printf("%d",i);
            return 0;
        }
        i++;
    }
}
