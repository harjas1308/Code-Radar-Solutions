#include <stdio.h>
#include<string.h>
int main(){
    char a[20];
    scanf("%s",a);
    int b=strlen(a),count=0;
    for(int i=0;i<b;i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
           count++;
        }else{
            continue;
        }
    }
    printf("%d",count);
    return 0;
}