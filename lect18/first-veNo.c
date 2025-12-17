#include<stdio.h>
int main(){
    int a[10]={12,-1,-7,-2,-1,-15,30,16,-2};
    int i;
    // for(i=0;i<8;i++){
    //     if(a[i]<0){
    //         printf("%d\n",a[i]);
    //     }
    //     else if(a[i+1]<0){
    //          printf("%d\n",a[i+1]);
    //     }
    //     else{
    //         continue;
    //     }
    // }

    //or
    int k=2;
    int n=sizeof(a)/sizeof(int);
    for(i=0;i<=n-k;i++){

        int found=0;
        for(int j=i;j<i+k;j++){
            if(a[j]<0){
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