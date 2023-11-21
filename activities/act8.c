// multiplication table
// uses do-while, while loops. and if-else statements

int main(){
    int row, column, product, tableSize, validInput;
    validInput = 0;
    do{
        printf("Enter tableSize of the table (1-15): ");
        scanf("%d", &tableSize);

        // check if input is valid
        if(tableSize < 1 || tableSize > 15){
            printf("Invalid tableSize\n");
            validInput = 0; // invalid input continue the loop
        } else{
            validInput = 1; // valid input exit loop
        }

    } while (validInput == 0);

    // loop to generate header row
    printf("\nThe Multiplication table");
    row = 1;
    printf("\n\t");
    while (row <= tableSize){
        printf("\t%d ", row);
        row++;
    }

    // loop to generate the table
    column = 1;
    while (row <= tableSize){
        printf("\n%d\t", column);

        // loop to generate products
        row = 1;
        while(row <= tableSize){{
            product = column * row;
            printf("%d\t", product);
            row++;
        }
        column++;
    }

    return 0;

}