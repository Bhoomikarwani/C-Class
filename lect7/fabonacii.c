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
        printf("%d \t",a);
        next=a+b;
        a=b;
        b=next;
        i++;
    }
   
     return 0;

     //wrong way
//     printf("%d \t",a) ;
//     printf("%d \t",b) ;
//     for(int i=0; i<=n+1 ; i++){
//         int next=a+b;
//         printf("%d \t",next);
//         a=b;
//         b=next;
//         i++;
//     }
//  return 0;

}