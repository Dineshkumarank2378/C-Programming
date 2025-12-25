#include <stdio.h>//   sum of digit is odd  sub 5
int main(void)
{
    int x,y,z;
    printf("Enter the number : ");
    scanf("%d",&x);
     z=x;
     y=z%10;
     z=z/100;
     
    x=x-(((y%2)*(z%2))*5);
    printf("Result=%d",x);
    //printf("%d",x%10);

}
