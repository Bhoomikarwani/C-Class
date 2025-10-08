#include <stdio.h>
#include <string.h>

int main(){
    
//  char name[]="bhoomi";    // '\0' automatically add hota hai
//  printf("Name=%s",name);  
//  return 0;
 
//  char name[20];
//  printf("enter your name:");
//  scanf("%s",name);         // space tak hi input leta hai
//  printf("you enter: %s",name);
//  return 0;

//  char name[20];
//  printf("enter your name:");
//  gets(name);          // pure line le lega, space ke sath
//  printf("you enter: %s",name);
//  return 0;

//length of string 
// char name[50];
// printf("enter your name:");
// gets(name);
// int length=strlen(name);
// printf("length of string = %d",length);

//palindrome
char name[50];
printf("enter your name:");
gets(name);
int length=strlen(name);
int istrue=1;
for(int i=0;i<length/2;i++)
 {
   if(name[i]!=name[length-1-i])
    {
        istrue=0;
        break;
    }
 }
 istrue==1?printf("palindrome"):printf("not palindrome");
}