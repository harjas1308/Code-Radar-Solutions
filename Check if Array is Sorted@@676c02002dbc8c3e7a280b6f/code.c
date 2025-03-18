// Your code here...
#include<stdio.h>
int main(){
    int n,arr1[20],arr2[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1){
            if(arr1[i]>arr1[i+1]){
                int c=arr1[i];
                arr1[i]=arr1[i+1];
                arr1[i+1]=c;
            }else if(arr1[i]==arr1[i+1]){
                arr1[i]=arr1[i];
            }else{
                continue;
            }
        }  
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr1[i]==arr2[i]){
            continue;
        }else{
            count++;
        }
    }
    if(count==0){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
}