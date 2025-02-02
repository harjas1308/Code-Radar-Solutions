#include <stdio.h>
int main(){
    int n,m,k;
    scanf("%d",&n);
    m=n;
    for(int i=1;i<=m;i++){
        k=1;
        for(int j=n;j>=1;j--){
            printf("%d ",k);
            k++;
        } n--;
        printf("\n");
    }return 0;
}