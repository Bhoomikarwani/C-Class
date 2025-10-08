#include <stdio.h>
int main(){
    
//  char name[]="bhoomi";    // '\0' automatically add hota hai
//  printf("Name=%s",name);  
//  return 0;
 
//  char name[20];
//  printf("enter your name:");
//  scanf("%s",name);         // space tak hi input leta hai
//  printf("you enter: %s",name);
//  return 0;

 char name[20];
 printf("enter your name:");
 gets(name);          // pure line le lega, space ke sath
 printf("you enter: %s",name);
 return 0;


}