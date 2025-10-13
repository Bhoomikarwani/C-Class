#include <stdio.h>
#include <stdlib.h> //for functions of DMA(dynamic memory allocation)
int main(){

    //make requried memory then assign values in it
    // int n;
    // printf("enter size :");
    // scanf("%d",&n);
    // int *arr=(int *)malloc(n*sizeof(int));  //this return value in void type so we do type casting

    // printf("enter %d elements :\n ",n);
    // for(int i=0 ;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0 ;i<n;i++)
    // {
    //     printf("%d",arr[i]);
    // }

    //rearrange the given array in the form{0,0,-1,-4,,4,3,2}
     int n,i;
    printf("enter size :");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));  //this return value in void type so we do type casting
    int *arr1=(int *)malloc(n*sizeof(int)); 
    printf("enter %d elements :\n ",n);
    for( i=0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("rearranged array :\n");
    int j=0;
    for( i=0;i<n;i++)
    {
        if(arr[i]==0){
           arr1[j]=arr[i];
           j++;
        }
    }
    for( i=0;i<n;i++)
    {
        if(arr[i]<0){
           arr1[j]=arr[i];
           j++;
        }
    }
    for( i=0;i<n;i++)
    {
        if(arr[i]>0){
           arr1[j]=arr[i];
           j++;
        }
    }
    for( i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
    free(arr); //ye bachi hui memory ko delete kar deta hai
}

