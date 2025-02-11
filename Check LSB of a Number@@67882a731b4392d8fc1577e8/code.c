// Your code here...
#include <stdio.h>

void check_lsb(int number) {
    // Check if the LSB is set or not using bitwise AND with 1
    if (number & 1) {
        printf("Set\n");
    } else {
        printf("Not set\n");
    }
}

int main() {
    int number;
    
    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    check_lsb(number); // Check LSB of the input number
    
    return 0;
}
