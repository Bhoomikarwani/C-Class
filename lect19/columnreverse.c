 #include <stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=2;i>=0;i--){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    }