#include<stdio.h>
int main(){
    int water=0;
    int heigth[6]={5,6,0,3,5,2};
    int leftMax[6];
    int rigthMax[6];
    leftMax[0]=heigth[0];
    for(int i=1; i<6 ;i++){
        if(heigth[i]>leftMax[i-1])
        {
            leftMax[i]=heigth[i];
        }
        else{
            leftMax[i]=leftMax[i-1];
        }
    }
    rigthMax[5]=heigth[5];
    for(int i=4; i>=0 ;i--){
        if(heigth[i]>rigthMax[i+1]){
            rigthMax[i]=heigth[i];
        }
        else{
            rigthMax[i]=rigthMax[i+1];
        }
    }
    for(int i=0; i<6; i++){
        int minHeigth;
        if(leftMax[i]<rigthMax[i]){
            minHeigth=leftMax[i];
        }
        else{
             minHeigth=rigthMax[i];
        }
        water+=minHeigth-heigth[i];

    }
    printf("total water=%d",water);
}