#include <stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    for (i = 0; i<3; i++)
    {
        for(j=0;j<3;j++){
            if(i==0 || j==2){
                printf("%d",a[i][j]);
            }
        }
    }
    for(i=2;i>1;i--){
        for(j=1;j>=0;j--){
            printf("%d",a[i][j]);
        }
    }
    for(i=1;i>0;i--){
        for(j=0;j<2;j++){
            printf("%d",a[i][j]);
        }
    }
    
}