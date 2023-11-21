// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int capital = 10000;
int bet;
int play();

 main(){
    char input;

    printf("\n\t[P]lay\n\t[E]xit\n\nChoice: ");
    scanf("%c", &input);
    if(input == 'P' || input == 'p'){
        current_capital();
        play();
    } else if (input == 'E' || input == 'e'){
        printf("Thank you Player! You have exited");
        exit(0);
    } else {
        printf("WARNING! Invalid Input");
    }
    return 0;
}

int current_capital(){
    printf("\nCurrent capital: %d\n", capital);
}

int play(){
    srand(time(0));

    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int total = die1 + die2;
    
    
    printf("Place your bet: ");
    scanf("%d", &bet);
    
    printf("\n\nROLL 1");
    printf("\n\tDie1: %d", die1);
    printf("\n\tDie2: %d\n", die2);
    printf("Total Sum of 2 Dice: %d\n\n", total);
    
    if (total == 7){
        playAgain_Win_Yes();
    } else if (total == 2 || total == 11){
        playAgain_Lose_No();
    }   
    
    succedingRoll();
}

int playAgain_Win_Yes(){
    char playAgain;
    printf("Congratulations, You Won!!");
    capital += bet;
    current_capital();
    for (int i = 1; i < 1;){
        if (playAgain == 'Y' || playAgain == 'y'){
            printf("\nDo you to play again? [Y/N] \nEnter: ");
            scanf("%c", &playAgain);
            play();
        } else if(playAgain == 'N' || playAgain == 'n'){
        printf("Thankyou for playing");
        exit(0);
        }
    }
}

int playAgain_Lose_No(){
    char playAgain;
    printf("\n\nOpps, you lose :(\n");
    capital -= bet;
    current_capital();
    for (int j = 0; j < 1;){
        printf("Do you to play again? [Y/N] \nEnter: ");
        scanf("%c", &playAgain);
        if (playAgain == 'Y' || playAgain == 'y'){
            play();
        } else if(playAgain == 'N' || playAgain == 'n'){
        printf("Thankyou for playing");
        exit(0);
        }
    }
}

// succeding rolls
void succedingRoll(){
    int total;
    int rollCounter = 2;
    int dice;
    srand(time(0));
    int isRunning = 1;
    do{
        int dieOne = rand() % 6 + 1;
        int dieTwo = rand() % 6 + 1;

        printf("\nROLL %d\n\t", rollCounter);
        printf("Die1: %d\n\t", dieOne);
        printf("Die2: %d\n\t", dieTwo);
        printf("Total Sum of 2 Dice: %d\n\n\n", dieOne + dieTwo);

        rollCounter++;
        if((dieOne + dieTwo) == total){
            playAgain_Win_Yes();
            isRunning = 0;
            
        } else if ((dieOne + dieTwo) == 7){
            playAgain_Lose_No();
            isRunning = 0;
        }
    } while(isRunning);
}