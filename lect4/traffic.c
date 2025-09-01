#include <stdio.h>
int main(){
    //Traffic Light System
    char a;
    printf("enter (r-red,g-green) :");
    scanf("%c",&a);
    switch(a){
        case 'r':printf("STOP");
                 break;
         case 'g':printf("GO");
                 break; 
        default:printf("Trafic Light kharab hai ") ;
                 break;                  
    }
    return 0;
}