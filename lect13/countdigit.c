#include <stdio.h>
int main(){
   int a[5]={2,3,4,2,3};
   int n,count=0;
   printf("enter no. for count");
   scanf("%d",&n);
   for(int i=0;i<5;i++){
         if(a[i]==n){
            count+=1;
         }
   }
   printf("%d occurs %d times",n,count);
}