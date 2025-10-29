//XOR (two same bits  output is zero)
 //(two different bits  output is 1)
 //n ^ 0= n

 #include <stdio.h>
 int main(){
    //find unique element in arr using xor
    int arr[5]={4,5,3,4,5};
    int XOR=0;
    for(int i=0; i<5;i++){
        XOR=XOR^arr[i];      //at the end same wale cancel ho jayenge and we get unique value in answer 
    }
    printf("%d",XOR);

    //swap two numbers using XOR
    // int a=5,b=3;
    // a=a^b;       //a=a+b
    // b=a^b;       //b=a-b 
    // a=a^b;       //a=a-b
    // printf("a= %d , b=%d",a,b);
 }