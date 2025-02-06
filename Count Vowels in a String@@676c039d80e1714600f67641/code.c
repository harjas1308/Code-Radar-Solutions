#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[20];
    scanf("%s",a);
    int b=strlen(a),count=0;
    for(int i=0;i<b;i++){
        char c=tolower(a[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
           count++;
        }else{
            continue;
        }
    }
    printf("%d",count);
    return 0;
}