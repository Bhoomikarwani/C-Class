#include <stdio.h>
int main(){
    float amt;
    int choice;
    printf("enter amount in rupees:");
    scanf("%f",&amt);
    printf("1 for EUR, 2 for USD , 3 for JPY, 4 for CHF, 5 for AUD:") ;
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("INR in EUR= %f",amt*0.0097);
                break;
        case 2:printf("INR in USD= %f",amt*0.011);
                break;
        case 3:printf("INR in JPY= %f",amt*1.67);
                break;
        case 4:printf("INR in CHF= %f",amt*0.0091);
                break;
        case 5:printf("INR in AUD= %f",amt*0.017);
                break;  
        default:printf("currently not possible \n try in another country");                               

    }
}