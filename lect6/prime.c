#include <stdio.h>
int main(){
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(a%i==0){
            printf("Not prime");
            break;
        }
        else{
            printf("prime");
            break;
        }
    }
     return 0;
}