#include <stdio.h>
int main(){
    int a=65;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%c",a++);
        }
        printf("\n");
    }
}