#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]%*c",a);
    int b=strlen(a),count=0;
    for(int i=0;i<b;i++){
        if(a[i]==" "){
            count++;
        }else{
            continue;
        }
    }
    printf("%d",count);
    return 0;
}