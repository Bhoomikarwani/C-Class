#include <stdio.h>
int main(){
   int count=0;
   int a;
   printf("enter any number: ");
   scanf("%d",&a);
   while(a>0)
   {

      count++;
     a=a/10;
   }
   printf("count=%d",count);
}