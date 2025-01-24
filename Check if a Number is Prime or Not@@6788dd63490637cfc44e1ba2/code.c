#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==2){
        printf("Prime");
    }else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                printf("Not Prime");
                break;
            }else{
                continue;
                if(a%a-1!=0){
                    printf("Prime");
                }
            }
        }
    }
    return 0;
}