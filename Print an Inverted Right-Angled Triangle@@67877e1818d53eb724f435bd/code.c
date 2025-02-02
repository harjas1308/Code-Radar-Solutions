#include <stdio.h>
int main(){
int i,j,k,l;
scanf("%d",&k);
l=k;
for(i=1;i<=l;i++){
    for(j=k;j>=1;j--){
        printf("* ");
    }printf("\n");
    k--;
} 
return 0;
}