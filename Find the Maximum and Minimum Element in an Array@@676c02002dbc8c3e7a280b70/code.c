// Your code here...
#include<stdio.h>
void minelement(int arr[],int a){
    int min=arr[0];
    for(int i=1;i<a;i++){
        if(min>arr[i]){
            min=arr[i];
        }else{
            min=min;
        }
    }
    printf("%d",min);
}
void maxelement(int arr[],int a){
    int max=arr[0];
    for(int i=1;i<a;i++){
        if(max<arr[i]){
            max=arr[i];
        }else{
            max=max;
        }
    }
    printf(" %d",max);
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    minelement(arr,a);
    maxelement(arr,a);
    return 0;
}