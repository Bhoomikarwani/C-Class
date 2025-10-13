#include <stdio.h>
#include <stdlib.h> //for functions of DMA(dynamic memory allocation)
int main(){

    int n;
    printf("enter size :");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));  //this return value in void type so we do type casting

    printf("enter %d elements :\n ",n);
    for(int i=0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //now for increment and decrement of size of array we use realloc
    printf("\n now enter new size: ");
    int newSize;
    scanf("%d",&newSize);

    arr=(int *)realloc(arr,newSize*sizeof(int));
    printf("enter %d new elements :\n",newSize);
    for(int i=0;i<newSize;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<newSize;i++){
        printf("%d",arr[i]);
    }
}    