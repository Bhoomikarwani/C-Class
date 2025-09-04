#include <stdio.h>
int main(){
    int n;
    printf("enter no. of terms :");
    scanf("%d",&n);
    int a=0,b=1;
    int next,i;
    // for(i=1;i<=n;i++){
    //     printf("%d \t",a);
    //     next=a+b;
    //     a=b;
    //     b=next;
    // }

    //using while loop
    i=1;
    while(i<=n){
        printf("%d \t",a);;
        next=a+b;
        a=b;
        b=next;
        i++;
    }
   
    return 0;
}