#include <stdio.h>
// int swap(int *p1,int *p2){
//    int t=*p1;
//    *p1=*p2;
//    *p2=t;
// }
// int main(){
//     int a=5,b=8;
//     swap(&a,&b);
//     printf("%d %d",a,b);
// }

//without using third variable
/*a=a+b
 b=a-b
 a=a-b*/
 int swap(int *p1,int *p2){
   *p1=*p1+*p2;
   *p2=*p1-*p2;
   *p1=*p1-*p2;
}
int main(){
    int a=5,b=8;
    swap(&a,&b);
    printf("%d %d",a,b);
}