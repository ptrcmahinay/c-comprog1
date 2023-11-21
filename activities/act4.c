// It focuses on the use of while loops and nested while loops, increment and decrement

// It prints the two pattern of asterisk. Like this:
// *****    *
//  ****   **
//   ***  ***
//    ** ****
//     ******


#include <stdio.h>
int main(){
    int ctr1, ctr2, ctr3, ctr4, lines;

    printf("How many lines do you want? "); //5
    scanf("%d", &lines);

    ctr2 = lines; //5
    ctr4 = lines;//5

    // outer loop controlling the number of lines
    while(ctr2 >= 1 && ctr4 >= 1){ // if 5 & 5 is greater than or equal to 1
        ctr1 = lines; // 5

        // prints the leading spaces
        while(ctr1 > ctr2){ // is 5 is greater than 5 FALSE
            printf(" ");
            ctr1--;
        }

        // prints the first set asterisks
        ctr1 = 1;  
        while (ctr1 <= ctr2){ // is 1 is less than or equal to 5 TRUE
            printf("*");
            ctr1++; // Will print "*****"
        }

        // prints the spaces after the first asterisk
        ctr3 = 1; 
        while (ctr3 < ctr4){ // is 1 less or equal to 5? TRUE
            printf(" ");
            ctr3++; //will print "     " (5 spaces)
        }

        // prints the second set of asterisk beside the space
        ctr3 = lines; // will decrement the number of lines 
        while(ctr3 >= ctr4){ // is 5 greater than or equal to 5? TRUE
            printf("*"); 
            ctr3--; // will print "*"
        }

        printf("\n"); // move to the next line
        ctr4--, ctr2--;
    }

    return 0;
}