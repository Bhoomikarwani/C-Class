#include <stdio.h>
int main(){
    int a=65;
     for(int i=0;i<4;i++){
        for(int j=3;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("%c",a++);
        }
        for(int l=1;l<=i;l++)
        {
            printf("%c",a++);
        }
        printf("\n");
    }


}