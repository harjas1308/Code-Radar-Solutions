// Your code here...
#include<stdio.h>
int main(){
    int arr[20],a,b,c=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        if(i==a-1){
            arr[i]=arr[0];
        }else{
            arr[i]=arr[i+1];
        }
    }
return 0;
}