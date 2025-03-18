// Your code here...
#include<stdio.h>
int main(){
    int arr[20],a,b,c=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        arr[a-i]=arr[c];
        c++;
    }
    for(int i=0;i<a;i++){
        printf("%d\n",arr[i]);
    }
return 0;
}