// Your code here...
#include <stdio.h>

void check_lsb(int number) {
    // Check if the LSB is set or not using bitwise AND with 1
    if (number & 1) {
        printf("The Least Significant Bit of %d is set (1).\n", number);
    } else {
        printf("The Least Significant Bit of %d is not set (0).\n", number);
    }
}

int main() {
    int number = 13; // Example number
    check_lsb(number); // Check LSB of the example number
    
    return 0;
}
