#include <stdio.h>
int main(){
     int a=65;
     for(int i=0;i<4;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=3;k>i;k--){
            printf("%c",a++);
        }
        for(int l=2;l>i;l--)
        {
            printf("%c",a++);
        }
        printf("\n");
    }