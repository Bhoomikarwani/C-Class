#include<stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("enter size :");
    scanf("%d",&n);
    int *arr=(int *)calloc(n,sizeof(int));
    //calloc -> [[],[],[],[]] (every element has size of 4byte)memory allocation like this 
    //and it takes zero value in by default
     printf("enter %d elements :\n ",n);
    for(int i=0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n%d",sizeof(arr[1]));
    
}