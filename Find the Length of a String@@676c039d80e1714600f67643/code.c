#include <stdio.h>
#include<string.h>
int main(){
    char a[20];
    scanf("%[^\n]%*c",a);
    int b=strlen(a);
    printf("%d",b);
    return 0;
}