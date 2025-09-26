#include <stdio.h>
int main(){
    int a[8]={1,3,4,7,1,4,0,0};
    int i, k=3;
    int wsum=0;
    for (i=0;i<k;i++){
        wsum+=a[i];
    }
    int maxsum=wsum;
    for(i=k;i<8;i++){
        wsum+=a[i]-a[i-k];
        if(wsum>maxsum){
            maxsum=wsum;
        }
    }
    printf("maxsum =%d",maxsum);
}