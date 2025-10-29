#include <stdio.h>
int main(){
    // int a=5;
    // //left shift(LS)
    // a=a<<1;  //on LS number gets double
    // printf("%d \n",a);

    // int b=5;
    // //right shift(RS)
    // b=b>>1;  //on RS number gets HALF
    // printf("%d \n",b);

    // int c=5;
    // c=c<<2;
    // printf("%d \n",c);

    // int d=5>>4;
    // printf("%d \n",d);


    //find missing no.
    int arr[4]={1,2,4,5};
    int xor1=0,xor2=0;
    for(int i=1;i<=5;i++){
        xor1=xor1^1;
    }
    printf("%d \n",xor1);
    for(int i=0;i<4;i++){
        xor2=xor2^arr[i];
    }
    printf("%d \n",xor2);
    printf("missing no. =%d\n",xor1^xor2);
}