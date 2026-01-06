#include<stdio.h>//reverse each number and print sum of all numbers in new array
int main()
{
    int a1[5],a2[5],b=0,y=0,c=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<5;i++)
    {
      for(int j=a1[i];j>0;j/=10)
      {
         y=y*10;
         y=(j%10)+y;
      }a2[b]=y;
      b++;
      y=0;
    }for(int i=0;i<b;i++)
    {
      c=a2[i]+c;
    //  printf("%d ",a2[i]);
    }
    printf("%d",c);
}