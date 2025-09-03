#include <stdio.h>
int main(){
    int a=378;
    int rev=0;
    int lastDigit;
    while(a!=0){
        lastDigit=a%10;
        rev=rev*10+lastDigit;
        a=a/10;
    }
    printf("reverse = %d",rev);
}