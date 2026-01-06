#include<stdio.h>//get number until o was input and total number is odd then print middle element if even print average of middle two numbes
int main()
{
    int a1[100],c=0,b=0;;
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a1[i]);
        c++;
        if(a1[i]==0)
        {
            c--;
            break;
        }
    }
   // printf("%d %d",a1[0],a1[c]);
   //printf("%d",c);
   if(c%2==1)
   {
     printf("%d",a1[(c/2)]);
   }else
   {
      b=(a1[c/2]+a1[(c/2)-1])/2;
      printf("%d",b);
   }
}