#include<stdio.h>//print odd number between  1 to 9
 void disp_odd();
 int a,b,c;
int main()
{
    disp_odd();
}
void disp_odd()
{
    while(a<10)
    {
       a++;
       if(a%2==1){
       printf("%d\n",a);}
    } 
}