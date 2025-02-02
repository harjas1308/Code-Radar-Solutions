#include<stdio.h>
int main(){
    int a,b;
    char sign;
    scanf("%f %f %c",&a,&b,&sign);
    // if(sign=='+'){
    // printf("%.0f",a+b);
    // }else if(sign=='-'){
    //     printf("%.0f",a-b);
    // }else if(sign=='*'){
    //     printf("%.0f",a*b);
    // }else if(sign=='/'){
    //     printf("%.0f",a/b);
    // }else{
    //     printf("error");
    // }
    switch(sign){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("error");
    }
    return 0;
}