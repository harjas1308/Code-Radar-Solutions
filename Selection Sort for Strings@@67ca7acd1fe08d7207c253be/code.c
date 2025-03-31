// Your code here...
#include<stdio.h>
#include<string.h>
int selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int minterm=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[minterm])<0){
                minterm=j;
            }
        }
        char temp[100];
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[minterm]);
        strcpy(arr[minterm],temp);
    }
    return 0;
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}