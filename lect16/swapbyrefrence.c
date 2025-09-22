#include <stdio.h>
int swap(int *p1,int *p2){
   int t=*p1;
   *p1=*p2;
   *p2=t;
  printf("%d %d",*p1,*p2);
}
int main(){
    int a=5,b=8;
    swap(&a,&b);
    
}