#include <stdio.h>
int main(){
    int a[5]={1,2,3,2,1};
    int n,i,j;
    // printf("enter no. of terms:");
    // scanf("%d",&n);
//     for(i=0,j=n-1;i<j;i++,j--){   //i<5/2
//         if(a[i]==a[j]){
//             continue;
//         }
//         else{
//             break;
//         }
//     }
//     if(i<j){
//         printf(" not palindrome");
//     }
//     else{
//         printf(" palindrome");
//     }


 //OR
 int istrue=1;
 for(i=0;i<5/2;i++){
   if(a[i]!=a[5-i-1]){
      istrue=0;
   }
 }
 if(istrue==1){
    printf("palindrome hai");
 }
 else{
    printf("palindrome nhi hai");
 }
}