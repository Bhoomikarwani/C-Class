#include<stdio.h>
int main(){
    int temp,j=0;
    int arr[6]={4,1,0,6,0,3};
    for(int i=0;i<6;i++){
        if(arr[i]==0){            //if(arr[i]!=0){ 
            temp=arr[6-1-j];      //temp=arr[i]; 
            arr[6-1-j]=arr[i];     // arr[i]=arr[j];
            arr[i]=temp;            // arr[j]=temp;
            j++;
        }
    }
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
}