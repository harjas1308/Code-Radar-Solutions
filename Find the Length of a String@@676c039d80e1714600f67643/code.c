#include <stdio.h>
#include<string.h>
int main(){
    char a[20];
    scanf("%s",a);
    int b=sizeof(a)/sizeof(a[0]);
    printf("%d",b);
    return 0;
}