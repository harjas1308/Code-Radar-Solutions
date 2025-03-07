// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int b=1,c;
        for(int j=1;j<=2*a-1;j++){
            c=i+j;
            if(j>=a-(i-1) && j<=a+(i-1)){
                if(c%2==0){
                printf("%d",b);
                b++;
                }else{
                    printf(" ");
                }
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}