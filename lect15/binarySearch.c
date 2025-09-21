#include <stdio.h>
int main(){
    int a[8]={1,2,3,4,3,3,5,6};
   int n;
   printf("enter no. for search :");
   scanf("%d",&n);
    int s=0,end=(sizeof(a)/sizeof(int))-1;
    while (s<=end)
    {
        int mid=(s+end)/2;
        if(a[mid]==n)
        {
            
            printf("Found at index %d",mid);
            return mid;
        }
        else if(n<a[mid]){
           end=mid-1;
        }
        else if(n>a[mid]){
            s=mid+1;
        }
        else{
            printf("Not found");
        }
    }
    return -1;
}