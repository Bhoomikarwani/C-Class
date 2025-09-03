#include <stdio.h>
int main(){
    int a;
    printf("enter any no. : ");
    scanf("%d",&a);
    int fact=1;
    for(int i=a;i>=1;i--){
        fact*=i;
    }
    printf("factorial= %d",fact);
    return 0;
}