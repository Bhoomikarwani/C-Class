#include <stdio.h>
int main(){
    for(int i=0;i<6;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=5;k>i;k--){
            printf("%d",a++);
        }
        for(int l=4;l>i;l--)
        {
            printf("%d",a++);
        }
        printf("\n");
    }
    
}