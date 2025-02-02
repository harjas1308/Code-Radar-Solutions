#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        (i%2==0)? b=0:b=1;
        for(int j=1;j<=i;j++){
            printf("%d ",b);
            b++;
        }printf("\n");
    }return 0;
}