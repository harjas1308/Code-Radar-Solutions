#include <stdio.h>
int main(){
    int a;char b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        b='A';
        for(int j=1;j<=i;j++){
            printf("%c ",b);
            b++;
        }printf("\n");
    }return 0;
}