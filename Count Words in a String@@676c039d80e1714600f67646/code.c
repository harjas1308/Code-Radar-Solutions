#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]%*c",a);
    int b=strlen(a),count=1;
    for(int i=0;i<b;i++){
        if(isalph(a[i]) || isdigit(a[i])){
            continue;
        }else{
            count++;
        }
    }
    printf("%d",count);
    return 0;
}