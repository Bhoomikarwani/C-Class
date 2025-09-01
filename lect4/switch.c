#include <stdio.h>
int main(){
    //simple calulator
    int a,b;
    char ch;
    printf("enter details :");
    scanf("%d %d %c",&a,&b,&ch);
    switch(ch)
    {
        case '+':printf("sum = %d",a+b);
                 break;
        case '-':printf("sub = %d",a-b);
                 break;
        case '*':printf("mul = %d",a*b);
                 break;
        case '/':(b!=0)?printf("div = %f",(float)a/b):printf("we cannot passs 0 in denominator");
                 break;         
        default: printf("error found");                           
    }
    return 0;
}