#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[80];
    scanf("%[^\n]",a);
    int b=strlen(a),count=1;
    for(int i=0;i<b;i++){
        if(isalpha(a[i]) || isdigit(a[i]) || ispunct(a[i])){
            continue;
        }else{
            count++;
        }
    }
    printf("%d",count);
    return 0;
}