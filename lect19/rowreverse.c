#include <stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int i,j,k,store;
    // for(i=0;i<3;i++){
    //     store=a[i][0];
    //     for(j=0,k=2;j<3,k>=0;j++,k--){
    //          if(j<2)
    //         {a[i][j]=a[i][k];}
    //         else{
    //             a[i][j]=store;
    //         }
    //     }
    // }
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d",a[i][j]);
    //     }
    //     printf("\n");


    //or
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=2;j>=0;j--){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    }
