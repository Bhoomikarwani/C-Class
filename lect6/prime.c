#include <stdio.h>
int main(){
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    if(a<=1){
        printf("Not prime");
        return 0;
    }
    int i=2;
    while(i<a)
    {
      if(a%i==0){
        printf("Not prime");
        break;
      }  
      i++;
    }
    if(i>=a){
        printf("prime");
    }
     
}

