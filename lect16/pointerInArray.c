#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *p=arr; //stores only address of first element
    for(int i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }

     for(int i=4;i>=0;i--){
        printf("%d",*(p+i));
    }
    
    int max=arr[0];
    for(int i=1;i<5;i++){
        if (max<*(p+i)){
            max=*(p+i);
        }
    }
    printf("%d",max);
}