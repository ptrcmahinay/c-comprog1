//  focuses on the variable, data type, and concatenation print

#include <stdio.h>

int main(void){
    // declare variables
    int x = 10;
    char w = 'y';
    float z = 5.1234;

    // print variables
    printf("\nFirst Example\n");
    printf("%d\n w is %c \n", x, w); // %d integer and %c character value
    printf("\nz is \n%f", z); // %f floating point value

    return 0; // Indicates successful execution of the program
}