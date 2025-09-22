#include <stdio.h>
// int main(){
//     int x=3;
//     int *a=&x;
//     printf("%d\n",x);
//      printf("%d\n",&x);
//       printf("%d\n",a);
//        printf("%d\n",*a);
// }

//call by value(mai jo value hum pass karenge vo copy hogi original value ki)
// int sum(int a,int b){
//      a=8;
//      b=2; 
//      return a+b;  
// }
// int main(){
//     int a=2,b=4;
   
//     int c=sum(a,b); 
//     printf("%d\n",c); 
//     //value change nhi hogi because copy pass hui thi
//      printf("%d",a+b);
// }


/*call by refrence(same variable mai changes lane kai liye inside function we pass address
   address of that variable and store in pointer)*/
int sum(int *a,int *b){
     *a=8;
     *b=2; 
     return *a + *b;  
}
int main(){
    int a=2,b=4;
   
    int c=sum(&a,&b); 
    printf("%d\n",c); 
    //value change hogi because main address mai changes hua hai
     printf("%d",a+b);
}