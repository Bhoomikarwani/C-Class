#include <stdio.h>
int main(){
    int a;
    printf("enter any number :");
    scanf("%d",&a);
    int original=a;
    int rev=0;
    int lastDigit;
    while(a!=0){
        lastDigit=a%10;
        rev=rev*10+lastDigit;
        a=a/10;
    }
    
    if(rev==original){
        printf("Given no. is palindrome no.");
    }
    else{
        printf("Given no. is NOT palindrome no.");
    }
}