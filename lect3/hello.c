#include <stdio.h>
#include <conio.h>
int main()
{
    //post and pre (increment and decrement)
    //  int a=5;
    // int b=3;
    // int sum= a++ +  ++b + --b + b-- + ++a;
    // printf("Sum is : %d",sum); 
    // return 0;

    // if (a==5 || b>5){
    //     printf("Hello");
    // }
    // else{
    //     printf("Hii");
    // }

//    int a;
//    printf("enter num = ");
//    scanf("%d",&a);
    // if(a>0){
    //     printf("Positive");
    // }
    // else if(a<0){
    //     printf("Negative");
    // }
    // else{
    //     printf(" entered number is Zero");
    // }


    //Simple Calculator
    int a,b;
    printf("enter 1st num= ");
    scanf("%d",&a);
    printf("enter 2nd num= ");
    scanf("%d",&b);
    char sym;
    printf("enter an operator(+, -,* , / ) :");
    sym=getche();
    int c;
    if(sym=='+'){
          c=a+b;
          printf("\nSum = %d",c);
    }
    else if(sym=='-'){
        c=a-b;
        printf("\nSubstraction = %d",c);
    }
    else if(sym=='*'){
        c=a*b;
        printf("\nMultiplication = %d",c);
    }
    else if(sym=='/'){
        if(b!=0){
        float f;
        f=(float)a/b;
        printf("\nDivision = %f",f);
        }
        else{
            printf("b cannot be 0");
        }
    }
    else{
        printf("error");
    }
   return 0;
}