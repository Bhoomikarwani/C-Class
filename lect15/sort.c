#include <stdio.h>
//Bubble sort
//Assending order
// int main(){
//     int a[5]={2,1,3,64,5};
//     int i,j,t;
//     int n=sizeof(a)/sizeof(int);
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 t=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=t;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d",a[i]);
//     }
// }


//Desending order
int main(){
    int a[5]={2,1,3,64,5};
    int i,j,t;
    int n=sizeof(a)/sizeof(int);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }    
}