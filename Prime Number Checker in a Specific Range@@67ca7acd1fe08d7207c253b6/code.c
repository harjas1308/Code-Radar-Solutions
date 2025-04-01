// Your code here...
#include<stdio.h>
int printPrimesInRange(int a,int b){
    int i=1,c=b-a,arr[100];
    for(int j=a;j<=b;j++){
        int count=0;
        for(;i<=c;i++){
            if(j%i==0){
                count++;
            }else{
                continue;
            }
        }
        if(count==2){
            arr[i]=count;
        }
    }
    for(int j=0;j<=i-1;j++){
        int minterm=j;
        for(int k=j+1;k<=i;k++){
            if(arr[k]<arr[minterm]){
                minterm=k;
            }
        }
        int temp=arr[j];
        arr[j]=arr[minterm];
        arr[minterm]=temp;
    }
    for(int j=0;j<=i;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}