#include <stdio.h>
int main(){
    // int n;
    // printf("enter no. of rows:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //OR
    for(int i=0;i<3;i++){
        for(int j=3;j>i;j--){
            printf("*");
        }
        printf("\n");
    }

    //  for(int i=0;i<3;i++){
    //     for(int j=3;j>i;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
}