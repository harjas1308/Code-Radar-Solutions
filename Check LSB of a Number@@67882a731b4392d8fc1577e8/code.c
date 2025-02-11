// Your code here...
#include <stdio.h>

// Function to get the LSB of a number
int get_lsb(int number) {
    return number & 1;  // LSB can be found using bitwise AND with 1
}

int main() {
    int number = 13;  // Example number (binary: 1101)
    printf("The LSB of %d is: %d\n", number, get_lsb(number));
    return 0;
}
