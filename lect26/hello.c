#include <stdio.h>
int main(){
    int n=5;
    if(n&1){  //&(bitwise and) now converted into binary means 101*001=101 ,then if statement check only last digit
          printf("odd");  //because last mai 1 hai
    }
    else
       {
        printf("even");//because last mai 0 hai
       }
}