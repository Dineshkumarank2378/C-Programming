#include<stdio.h>//get array and increment each element
void pointer_array(int *arr,int c);
int main()
{
    int*p;
    int b=0;
    scanf("%d",&b);
    int a1[b];
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a1[i]);
    }p=a1;
    pointer_array(p,b);
}
    void pointer_array(int * arr,int c)
    {
        for(int i=0;i<c;i++)
        {
             *arr=*arr+1;
             arr=arr+1;
        }
        arr=arr-c;
         for(int i=0;i<c;i++)
        {
            printf("%d ",arr[i]);
        }
      

    }

   
