//Add two integer arrays of up to 50 digits and store the result in a 51-digit array.
#include <stdio.h>
int main(){
    int a[50],b[50],c[51]={0};
    for (int i =0 ;i<50;i++){
        scanf("%d",&a[i]);
    }
    for (int i =0 ;i<50;i++){
        scanf("%d",&b[i]);
    }
    for (int i =49 ;i>=0;i--){
        int sum = a[i]+b[i]+c[i+1];
        c[i+1]=sum%10;
        c[i]=sum/10;
    }
    for (int i =0 ;i<51;i++){
        printf("%d",c[i]);
    }
}