#include <stdio.h>
int main()
{
    // int a=5,b=5;
    //ternary operator
    // a<5?printf("hello "):printf("namaste ");
    // b<10?printf("India"):printf("Africa");

    //we can remove curly braces when only 1 statment inside if and else
//     if (a<8)
//       printf("hello");
//     else
//       printf("hii");


     /*switch case is faster than if-else
       because in switch case only one condition is there no range*/


       //Day of Week Program
       int day;
       printf("1-mon,2-tue,3-wed,4-thr,5-fri,6-sat,7-sun\n");
       printf("enter any num :");
       scanf("%d",&day);
       switch(day)
       {
        case 1:printf("MONDAY");
               break;
        case 2:printf("TUESDAY");
               break;     
        case 3:printf("WEDNESDAY");
               break;
        case 4:printf("THURSDAY");
               break;
        case 5:printf("FRIDAY");
               break;
        case 6:printf("SATURDAY");
               break;
        case 7:printf("SUNDAY");
               break;                            
        default:
           printf("FUNDAY")      ;
              
         }

     return 0;
}