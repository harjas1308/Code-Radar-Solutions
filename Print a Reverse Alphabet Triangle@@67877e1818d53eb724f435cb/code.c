#include <stdio.h>
int main(){
    int a,l;char b;
    scanf("%d",&a);
    l=a;
    for(int i=1;i<=l;i++){
        b='A';
        for(int j=a;j>=1;j--){
            printf("%c ",b);
            b++;
        }a--;
        printf("\n");
    }return 0;
}