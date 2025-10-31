 #include <stdio.h>
 #include <string.h>
int check_palindrome(int arr[],int i,int j){
  if(i>=j)   //base case (ending condition)
     {
        return 1;
     }
   if(arr[i]!=arr[j]){
      return 0;
   }  
   return check_palindrome(arr,i+1,j-1);
}

int binary_search(int arr[],int s,int end){
    int n=6;//no. for search
    int mid;
    //base case
    if(s>end){
        return -1;
    }
    else{
         mid=(s+end)/2;
        if(arr[mid]==n){
            return mid;
        }
        else if(n<arr[mid]){
            end=mid-1;
            return binary_search(arr,s,end);
        }
        else{
            s=mid+1;
            return binary_search(arr,s,end);
        }
    }
}

int check_sorted(int arr[],int i){
    if(i>=4){
        return 1;
    }
    if(arr[i]<arr[i+1]){
       return check_sorted(arr,i+1);
    }
    return 0;

}
    
int string_palindrome(char name[],int i,int j){
    if(i>=j){
        return 1;
    }
    if(name[i]!=name[j]){
         return 0;
    }
    return string_palindrome(name,i+1,j-1);
}
 int main(){
    // int arr[5]={1,2,3,4,5};
    // int i=0,j=4;
    // int data =check_palindrome(arr,i,j);
    // printf("%d",data);

    // int size=5;
    // int s=0,end=size-1;
    // int data=binary_search(arr,s,end);
    //  printf("%d",data);

    // int i=0;
    // int data=check_sorted(arr,i);
    // printf("%d",data);
    
    char name[10]="wow";
    int i=0,j=2;
    int data=string_palindrome(name,i,j);
     printf("%d",data);


 }