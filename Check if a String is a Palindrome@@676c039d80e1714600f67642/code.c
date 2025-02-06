#include <stdio.h>
#include<string.h>
int main(){
    char a[20],b[20];
    scanf("%s",a);
    int c=strlen(a),d=0;
    for(int i=c-1;i>=0;i--){
        b[d]=a[i];
        d++;
    }
    int count=0;
    for(int i=0;i<c;i++){
        if(b[i]==a[i]){
            continue;
        }else{
            count++;
        }
    }
    if(count==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}