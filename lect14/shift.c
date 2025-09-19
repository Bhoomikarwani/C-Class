#include <stdio.h>
int main(){
    int n,i;
    printf("enter no. of terms:");
    scanf("%d",&n);
    
    int a[5]={1,3,4,5,2};
    int b=a[0];
    for(i=0;i<5;i++){
        a[i]=a[i+1];
    }
    a[n-1]=b;
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}