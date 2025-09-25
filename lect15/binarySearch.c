#include <stdio.h>
int Bsearch(int a[5],int size
){
     int n;
    
   printf("enter no. for search :");
   scanf("%d",&n);
    int s=0,end=size-1;
    while (s<=end)
    {
        int mid=(s+end)/2;
        if(a[mid]==n)
        {
            return mid;
        }
        else if(n<a[mid]){
           end=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
   int a[5]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(int);
   int data=Bsearch(a,size);
   printf("Found at index value %d",data);
}