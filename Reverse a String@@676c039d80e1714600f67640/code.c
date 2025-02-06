#include <stdio.h>
#include<ctype.h>
int main(){
    char a[20];
    scanf("%s",a);
    int b=strlen(a);
    for(int i=b-1;i>=0;i--){
        printf("%c",a[i]);
    }
    return 0;
}