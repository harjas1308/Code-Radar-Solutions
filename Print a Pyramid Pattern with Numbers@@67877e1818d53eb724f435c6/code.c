// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int b=1;
        for(int j=1;j<=2*a-1;j++){
            if(j>=a-(i-1) && j<=a+(i-1)){
                printf("%d",b);
                b++;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}