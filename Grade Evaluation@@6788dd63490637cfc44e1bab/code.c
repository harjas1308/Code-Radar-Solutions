#include <stdio.h>
int main(){
    char grade;
    scanf("%c",&grade);
    // switch(grade){
    //     case A:
    //     printf("Excellent");
    //     break;
    //     case B:
    //     printf("Good");
    //     break;
    //     case C:
    //     printf("Average");
    //     break;
    //     case D:
    //     printf("Below Average");
    //     break;
    //     case F:
    //     printf("Fail");
    //     break;
    //     default:
    //     printf("Invalid grade");
    // }
    if(grade=='A'){
        printf("Excellent");
    }else if(grade=='B'){
        printf("Good");
    }else if(grade=='C'){
        printf("Average");
    }else if(grade=='D'){
        printf("Below Average");
    }else if(grade=='F'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
    return 0;
}