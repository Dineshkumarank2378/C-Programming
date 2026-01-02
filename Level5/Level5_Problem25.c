#include<stdio.h>//no of single digit prime numbers
int x,y,z,a;
int main()
{
    scanf("%d",&x);
    for(;x>0;x/=10)
    {
        y=x%10;
        if(y==2)
        {
            z++;
        }
        else if((y==1)||(y==0))
        {
            continue;
        }

        else{a=1;
            for(int i=2;i<y;i++)
            {
                if(y%i==0)
                {
                    a=0;
                    break;
                }

            }if(a==1)
            {
                z++;
            }
        }
    }printf("%d",z);
}