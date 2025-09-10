#include <stdio.h>
int main(){
    int i,j,k,p;
    for(i=0;i<3;i++){
        for(j=2;j>i;j--){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("*");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(k=2;k>i;k--){
            printf("*");
        }
        for(k=1;k>i;k--){
            printf("*");
        }
        printf("\n");
    }
}