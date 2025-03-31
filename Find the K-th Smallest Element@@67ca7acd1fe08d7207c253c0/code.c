// Your code here...
#include<stdio.h>
int kthSmallest(int arr,int n,int k){
    for(int i=0;i<n-1;i++){
        int minterm=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minterm]){
                minterm=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minterm];
        arr[minterm]=temp;
    }
    return arr[k-1];
}