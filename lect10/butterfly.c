#include <stdio.h>
int main(){
    int i,j,k,p;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++){
            printf("*");
        }
        for(k=3;k>i;k--){
            printf(" ");
        }
        for(k=3;k>i;k--){
            printf(" ");
        }
        for(p=0;p<=i;p++){
            printf("*");
        }
        printf("\n");

    }
    for(i=0;i<3;i++){
         for(j=2;j>=i;j--){
            printf("*");
         }
         for(k=0;k<=i;k++){
            printf(" ");
         }
         for(k=0;k<=i;k++){
            printf(" ");
         }
         for(p=2;p>=i;p--){
            printf("*");
         }
         printf("\n");
    }
}