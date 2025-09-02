#include <stdio.h>
int main(){
    //counting 1 to 10
    // for(int i=1; i<=10;i++){
    //     printf("%d\n",i);
    // }
    
    //back counting 10 to 1
    // for(int i=10;i>=1;i--){
    //     printf("%d\n",i);
    // }

    // even number
    // for(int i=1;i<=10;i++)
    // {
    //     if(i%2==0){
    //         printf("%d\n",i);
    //     }
    // }

    //odd number
    // for(int i=1;i<=10;i++)
    // {
    //     if(i%2!=0){
    //         printf("%d\n",i);
    //     }
    // }

    //sum of number
    // int sum=0;
    // for(int i=1;i<=10;i++){
    //   sum+=i;
    // }
    // printf("sum of numbers from 1 to 10: %d",sum);

    // //table of 5
    // for(int i=1;i<10;i++)
    // {
    //     printf("%d \n",i*5);
    // }

   //sum of digits in number
   int sum=0;
   int a;
   printf("enter any number: ");
   scanf("%d",&a);
   while(a>0)
   {
     int lastDigit;
     lastDigit=a%10;
     sum=sum+lastDigit;
     a=a/10;
   }
   printf("sum=%d",sum);
   
}