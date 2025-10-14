#include <stdio.h>
#include <string.h>
struct address{
    int pincode;
};

struct student{
    char name[50];
    int rollNo;
    int age;
    struct address s2;
};

int main(){
    struct student s1;
    strcpy(s1.name,"hello");
    s1.rollNo=1;
    s1.age=20;
    s1.s2.pincode=28382778;
    printf("name : %s\n",s1.name);
     printf("age : %d\n",s1.age);
      printf("roll no. : %d\n",s1.rollNo);
      printf("pincode = %d",s1.s2.pincode);
}