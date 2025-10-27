#include <stdio.h>
int main(){
    //best time to buy and sell stock
    int prices[6]={7,0,5,3,6,4};
    int min=prices[0];
    
    int j=0;
    for(int i=1;i<6;i++){
        if(prices[i]<min){
            min=prices[i];
            j++;
        }
    }
    int max=prices[j];
    for(int i=j;i<6;i++){
        
        if(prices[i]>max){
            max=prices[i];
        }
    }
    int profit=max-min;
    printf("%d",profit);

}