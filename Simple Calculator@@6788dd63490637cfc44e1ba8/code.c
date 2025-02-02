#include<stdio.h>
int main(){
    float a,b;
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
        printf("%.0f",a+b);
        break;
        case '-':
        printf("%.0f",a-b);
        break;
        case '*':
        printf("%.0f",a*b);
        break;
        case '/':
        printf("%.0f",a/b);
        break;
        default:
        printf("error");
    }
    return 0;
}