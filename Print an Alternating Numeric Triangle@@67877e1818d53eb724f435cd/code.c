#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        // if(i%2==0){b=0;}
        // else{b=1;}
        for(int j=1;j<=i;j++){
            if(i%2!=0 && j%2!=0)
            printf("%d ",1);
            else if(i%2!=0 && j%2==0){
                printf("%d",0);
            }else if(i%2==0 && j%2!=0){
                printf("%d ",0);
            }else{
                printf("%d",1);
            }
        }printf("\n");
    }return 0;
}