#include<stdio.h>
int main(){
    //find greater and positive no.s
    int a[8]={2,-4,2,5,-8,4,1,0};
    int i;
    int k=2;
    int n=sizeof(a)/sizeof(int);
    for(i=0;i<=n-k;i++){

        int found=0;
        for(int j=i;j<i+k;j++){
            if(a[j]>0){
                printf("%d",a[j]);
                found=1;
                break;
            }
        }
        if(!found){
            printf("0");
        }
    }
    return 0;
}