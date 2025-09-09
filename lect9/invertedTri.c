#include <stdio.h>
int main(){
    for(int i=0;i<4;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=3;k>i;k--){
            printf("*");
        }
        for(int l=2;l>i;l--)  //l=3;l>=i;l--
        {
            printf("*");
        }
        printf("\n");
    }
}