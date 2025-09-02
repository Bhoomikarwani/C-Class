#include <stdio.h>
int main(){
    printf("Welcome to ATM \n");
    int choice;
    float balance=10000,amt;
    printf("1. Check Balance \n 2. Withdraw \n 3. Deposit \n 4. Exit\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
       case 1 :printf("Current Balance = %.2f",balance);
               break;
       case 2 :printf("enter amt :");
               scanf("%f",&amt);
               if(amt<=balance){
                balance-=amt;
                printf("Withdraw successfully \n New balance = %.2f",balance);
               }
               else{
                printf("Not possible");
               }
               break;
       case 3 :printf("enter amt :");
               scanf("%f",&amt);
               balance+=amt;
               printf("Deposit successfully \n New balance = %.2f",balance);
               break;
       case 4 :printf("Thank you ! Exiting...\n");
               break;                        
    
       default:
               break;
    }
    return 0;
}