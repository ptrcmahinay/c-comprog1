// a 10x10 matrix of random numbers.

int main(){
    int ranNum, row, col, even = 0, odd = 0, sumEven = 0, sumOdd = 0;
    printf("Output \n");
    
    // see the random number generator
    srand(time(0));

    for (row = 1; row <= 10; row++) {
        for(col = 0; col < 10; col++){
            // generates a random number between 1 - 50
            ranNum = rand() % 50 + 1;
            // checks if the number is odd or even
            if(ranNum % 2 == 0){
                // if even, increment the even count and add to the sum of even numbers
                even += 1;
                sumEven += ranNum;
            } else{
                // if odd, increment the odd count and add to the sum of odd numbers
                odd += 1;
                sumOdd += ranNum;
            } 
            printf("%3d", ranNum);
        }
        printf("\n");
    }

    // print the counts and sums of even and odd numbers
    printf("\nTotal even numbers: %d\n", even);
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Total odd numbers: %d\n", odd);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}