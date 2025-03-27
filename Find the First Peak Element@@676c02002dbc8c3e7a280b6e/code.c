// Your code here...
#include<stdio.h>
int main(){
    int n,arr1[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr1[i]>arr1[i+1]){
            printf("%d",arr1[i]);
            break;
        }
        // }else if(arr1[i]<arr1[i+1]){
        //     continue;
        else{
            printf("%d",arr1[n-1]);
            break;
        }
    }
    return 0;
}