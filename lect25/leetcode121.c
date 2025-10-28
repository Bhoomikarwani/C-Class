#include <stdio.h>
int main(){
    //best time to buy and sell stock
    int prices[6]={7,1,5,3,6,4};  //let humne 0 stock buy kiye then usko maximum 6 mai sell kiya
    int min=prices[0];            //toh profit 6-0=6
    
    int maxP=0;
    for(int i=1;i<6;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        else{
            int profit=prices[i]-min;
            if(profit>maxP){
                maxP=profit;
            }
        }
    }
    
    printf("%d",maxP);

}