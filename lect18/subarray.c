#include <stdio.h>
int main(){
    //max sum of subarray of size 2
    // int a[5]={1,2,0,4,-2};
    // int currentsum=0;
    // int sum;
    // for(int i=0;i<4;i++){
    //      sum=0;
    //     sum=a[i]+a[i+1];
    
    // if(currentsum<sum){
    //    currentsum=sum;
    // }
    // }
    // printf("%d",currentsum);

    //by sliding window
    int a[5]={1,3,5,1,4};
    int windowsum=0;
    int k=2;
    for(int i=0;i<k;i++){
        windowsum+=a[i];
    }
    int maxsum=windowsum;
    for(int i=k;i<5;i++){
        windowsum+=a[i]-a[i-k];
        if(windowsum>maxsum){
            maxsum=windowsum;
        }
    }
    printf("%d",maxsum);
}