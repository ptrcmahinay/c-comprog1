// focuses on the while loop that creates a pattern like this:
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

#include <stdio.h>

int main(){
    int row, maxValue, column;
    printf("Enter a number: ");
    scanf("%d", &maxValue);

    row = 1;
    while (row <= maxValue) { // is 1 less than or equal to 4? if TRUE next line
        printf("\n");
        column = 1;
        while(column <= row) { // is 1 less than or equal to 1? TRUE.
            printf("%d ", column);
            column++; // 1 + 1 = 2....
        }

        row++; // 1 + 1 = 2
    }
    return 0;
}