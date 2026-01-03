#include<stdio.h>//no of single digit prime numbers
int x,y,z,a;
int main()
{
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        if(y==2)
        {
            z++;
        }
        else if((y==1)||(y==0))
        {
            x/=10;
            continue;
        }

        else{a=1;
            int i=2;
            while(i<y)
            {
                if(y%i==0)
                {
                    a=0;
                    break;
                }
                i++;
            }if(a==1)
            {
                z++;
            }
        }
        x/=10;
    }printf("%d",z);
}
