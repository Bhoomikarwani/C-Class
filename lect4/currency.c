#include <stdio.h>
int main(){
    float amt;
    int choice;
    printf("enter amount in rupees:");
    scanf("%f",&amt);
    printf("1-in EUR, 2- in USD ") ;
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("in EUR= %f",amt*0.011);
                break;
        case 2:printf("in USD= %f",amt*0.011);
                break;        
    }
}