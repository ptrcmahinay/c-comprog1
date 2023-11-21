#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h>

//Betting System
//LUCK n ROLL

float capital = 9000.00;
float bet;

//Display Win or Lose
void displayWon(), displayLose(); 


void displayWon(){
    printf("\t\t\t======================================================\n");
    printf("\t\t\t=   ==   =============================================\n");
    printf("\t\t\t==  ==  ==============================================\n");
    printf("\t\t\t==  ==  ====   ===  =  =======  =   =  ===   ===     =\n");
    printf("\t\t\t===    ====  =  ==  =  =======  =   =  ==  =  ==  =  =\n");
    printf("\t\t\t====  =====  =  ==  =  ========   =   ===  =  ==  =  =\n");
    printf("\t\t\t====  =====  =  ==  =  ========= === ====  =  ==  =  =\n");
    printf("\t\t\t====  ======   ====    ========= === =====   ===  =  =\n");
    printf("\t\t\t======================================================\n\n\n");
}


void displayLose(){
    printf("\t\t\t======================================================\n");
    printf("\t\t\t=   ==   =====================  ======================\n");
    printf("\t\t\t==  ==  ======================  ======================\n");
    printf("\t\t\t==  ==  ====   ===  =  =======  ===   ====   ====   =\n");
    printf("\t\t\t===    ====  =  ==  =  =======  ==  =  ==  =  ==  =  =\n");
    printf("\t\t\t====  =====  =  ==  =  =======  ==  =  ===  ====     =\n");
    printf("\t\t\t====  =====  =  ==  =  =======  ==  =  ==  =  ==   ===\n");
    printf("\t\t\t====  ======   ====    =======  ===   ====   ====    =\n");
    printf("\t\t\t======================================================\n\n\n");
}

void bye(){
  cyan();
  printf("\n               ##################\n");                                                      
  printf("           ####                 #####\n");                                                      
  printf("        ##                          ##\n");                                                     
  printf("         ##                          ##$\n");                                                      
  printf("   **  ##&&****                        $$\n");                                                      
  printf("   ****##  ****              ******    ##\n");                                                      
  printf("   ******************        ******    ##\n");                                                      
  printf(" ********************        ######    ##\n");                                                      
  printf("     **#$ &  ******   $##    ######   $##\n");                                                    
  printf("       **$$  **      $$####          $$\n");                                                      
  printf("       ####  ##                  ##  ####                                          ##  ##\n");
  printf("       ##    ################    ##    ##                                          ##  ##\n");
  printf("       ##      ##  ##  ##  ##  ##      ##            ########  ######  ######  ######  ######  ##  ##  $#####\n");
  printf("       **####    ##############    ####**            ##        ##  ##  ##  ##  ##  ##  ##  ##  ##  ##  ##  ##\n");
  printf("     ********$$$$              ####********          ##   ###  ######  ######  ######  ######  ######  ######\n");
  printf("    ***$$****$$$$##############$$$$****##**          ##    ##                                      ##  ##\n");
  printf("     ****######******************######  ##$         ########                                  ######  ######  \n");
  printf("   ****  ##  $$######******######    ##  ##$$  \n");                                                  
  printf("   ##      ##$$$$##    ##    ##    ##      ##**\n");                                                   
  printf(" ##    ####  ####$$$$$$      ######  ####  **** \n");                                                    
  printf("##        ##    ##$$$$$$$$$####    ##        ****\n");                                                    
  printf(" ##          ##  ##    $$$$$$##  ##          ##\n");                                                      
  printf("   ##      ##    ########$$$$$$  ##  $$$$##\n");                                                       
  printf("     $$$$  ##    ############$$    ##  $$$$\n");                                                        
  printf("       ######    ##############    ######\n");                                                         
  printf("       ##################################\n");                                                          
  printf("     ######################################\n");                                                         
  printf("     ######################################\n");                                                          
  printf("       ##############      ##############\n");                                                          
  printf("   ######          ##      ##          ######\n");                                                           
  printf("   ##$$$$$$$$$$$$####      ####$$$$$$$$$$$$##\n");                                                           
  printf("     $$$$$$$$$$$$              $$$$$$$$$$$$\n");
  reset();
}

void rules(){
    yellow();
    printf("\t\t\t===================================\n");
    printf("\t\t\t=       ==========  ===============\n");
    printf("\t\t\t=  ====  =========  ===============\n");
    printf("\t\t\t=  ===   ==  =  ==  ===   ====   ==\n");
    printf("\t\t\t=      ====  =  ==  ==  =  ==  =  =\n");
    printf("\t\t\t=  ===  ===  =  ==  ==     ===  ===\n");
    printf("\t\t\t=  ====  ==  =  ==  ==  =====  =  =\n");
    printf("\t\t\t=  =====  =     ==  ===    ===   ==\n");
    printf("\t\t\t===================================\n\n\n");
    reset();


  red();
  printf("\nNote: ");
  reset();

  cyan();
  printf("Get 7 on the first roll and win, get 11 or 2 and you lose.");
  reset();

  red();
  printf("\nNote: ");
  reset();

  cyan();
  printf("Get the total sum of the 2 dice on the first roll to win the second roll onwards.");
  reset();

  red();
  printf("\nNote: ");
  reset();

  cyan();
  printf("Get 7 on roll 2 onwards and lose, Goodluck!");
  reset();
  cyan();
  printf("\n\nTake time to read\n\n\n");
  sleep(1);
  reset();

    char goback;
    cyan();
    printf("Press");
    reset();
    yellow();
    printf(" [P]");
    reset();
    cyan();
    printf(" to play %c", 16);
    reset();
    cyan();
    printf("\nPress");
    reset();
    yellow();
    printf(" [E]");
    reset();
    cyan();
    printf(" to Exit %c\n\n", 17);
    printf("\n Enter: ");
    scanf(" %c", &goback);
    reset();

    if(goback == 'P' || goback == 'p'){
        play();
        }

    else if(goback == 'E' || goback == 'e'){
        exit(0);
        }
    else{
        rules();
    }
}

//Play Again function

void playAgain_Lose_No(){

    char playAgain;

    for (int no2 = 0; no2 < 1; no2++){

    Beep(988,232);
        cyan();
        printf("\nDo you to play again? [Y/N] \nEnter: ");
        scanf(" %c", &playAgain);
        if (playAgain == 'Y' || playAgain == 'y'){
            play();
        } else if(playAgain == 'N' || playAgain == 'n'){
        printf("\n\nThankyou for playing\n\n");
        bye();
        exit(0);
        }
        reset();
    }
}


//Second Roll onwards Function
void roll(int total){
    int rollCounter = 2;
    int dice;
    srand(time(0));
    int isRunning = 1;
    do{
        sleep(3);
        int dieOne = rand() % 6 + 1;
        int dieTwo = rand() % 6 + 1;

        Beep(2000, 100);
        red();
        printf("ROLL %d\n\t", rollCounter);
        reset();
        printf("Die1: %d\n\t", dieOne);
        printf("Die2: %d\n\t", dieTwo);
        printf("\n\tTotal Sum of 2 Dice: %d\n\n\n", dieOne + dieTwo);
        
        rollCounter++;
        if((dieOne + dieTwo) == total){
            printf("\nCongrats!\n");
            yellow();
            displayWon();
            reset();
            capital = capital + bet;
            cyan();
            printf("\n\nCurrent capital: %.2f\n\n", capital);
            reset();
            playAgain_Lose_No();
            isRunning = 0;
        }
        else if((dieOne + dieTwo) == 7){
            printf("\nOpps, better luck next time!\n\n\n");
            yellow();
            displayLose();
            reset();
            capital = capital - bet;
            cyan();
            printf("\n\nCurrent capital: %.2f\n\n", capital);
            reset();
            playAgain_Lose_No();
            isRunning = 0;
        }
    }while(isRunning);
}

    //COLOR FUNCTIONS for designs
    void red(){
        printf("\033[1;31m");
        }

    void green(){
        printf("\033[0;32m");
        }

    void yellow(){
        printf("\033[1;33m");
        }

    void purple(){
        printf("\033[0;35m");
        }

    void cyan(){
        printf("\033[0;36m");
        }

     //RESET COLOR FUNCTION
    void reset(){             
        printf("\033[0m");
        }

//Play Function
void play(){

  int die1;
  int die2;
  int total;

  srand(time(0));

  die1 = rand() % 6 + 1;
  die2 = rand() % 6 + 1;
  
  system("cls");
  cyan();
  printf("\nCurrent Capital: %.2f", capital);
  printf("\n\nPlace your bet: ");
  scanf("%f", &bet);
  system("cls");
  reset();

  //Rules Of The Game
  if(bet <= capital){

  system("cls");
  cyan();
  printf("\n\nGame Starting, Please wait");
  reset();
  reset();

  //Game start!!
  int j;
  for(j = 1; j <=3; j++){
        sleep(2);
        printf(".");
    
    } 
    cyan();
    printf("\n\nDice are ready to roll!\n");
    printf("\n\nPress ");
    reset();
    yellow();
    printf("[Enter]");
    reset();
    cyan();
    printf(" to Roll the Dice");
    reset();
    getch();
    system("cls");

    purple();
    printf("Rolling dice");
    int i;
    for(i = 1; i <=3; i++){
        sleep(1);
        printf(".");
    }
    system("cls");
    total = die1 + die2;
    reset();

    green();
    Beep(2000, 100);
    red();
    printf("\n\nROLL 1");
    reset();
    printf("\n\tDie1: %d", die1);
    printf("\n\tDie2: %d\n", die2);
    printf("\n\tTotal Sum of 2 Dice: %d\n\n", total);

    if(total == 7){
        printf("Congrats!\n\n\n");
        yellow();
        displayWon();
        reset();
        capital = capital + bet;
        cyan();
        printf("\n\nCurrent capital: %.2f\n\n", capital);
        reset();
        playAgain_Lose_No();
    }

    else if(total == 11 || total == 2){
        printf("Opps, better luck next time!\n\n");
        yellow();
        displayLose();
        reset();
        capital = capital - bet;   
        cyan();
        printf("\n\nCurrent capital: %.2f\n\n", capital);  
        reset();
        playAgain_Lose_No();
    }
    else{
        roll(total);
    }
    reset();
  }
  else if(bet > capital){
    cyan();
    printf("Not enough money.\n\n");
    reset();
  }
  else{
    printf("Wrong input\n\n");
  }
}

//Main Function of the Program
int main(){
    Beep(300,500);
    Beep(400,500);
    Beep(500,500);
    Beep(600,500);
    Beep(800,500);
    Beep(2000,700);


    const char* text = "\n\nWELCOME TO\n\n\n";
    int length = strlen(text);

    system("cls");
    sleep(1);
    cyan();
        for(int wel = 0; wel < length; wel++){
            printf("%c", text[wel]);

            fflush(stdout);
            usleep(100000);
        }
        reset();
        printf("\n");

//Introducion of the Program
  purple();
  sleep(1);
  Beep(800,500);
  printf("\t _______  _______  _______  _______ \t\n");
  printf("\t|       ||       ||       ||       |\t\n");
  printf("\t|   L   ||   U   ||   C   ||   K   |\t\n");
  printf("\t|_______||_______||_______||_______|\t\n");
  reset();

  yellow();
  Sleep(500);
  Beep(800,500);
  printf("\t\t\t\t\t _______ \n");
  printf("\t\t\t\t\t|       |\n");
  printf("\t\t\t\t\t|   n   |\n");
  printf("\t\t\t\t\t|_______|\n");
  reset();

  green();
  Sleep(500);
  Beep(800,500);
  printf("\t\t\t\t\t      _______  _______  _______  _______  _______   \n");
  printf("\t\t\t\t\t     |       ||       ||       ||       ||       |  \n");
  printf("\t\t\t\t\t     |   R   ||   O   ||   L   ||   L   ||   !   |  \n");
  printf("\t\t\t\t\t     |_______||_______||_______||_______||_______|  ");
  Sleep(1000);
  reset();

    int ver = 0;
    int speed = 1;
    int limit = 10;

    for (int idunno = 0; idunno < limit; idunno++){
        system("cls");
        for (int jey = 0; jey < ver; jey++){
            printf("\n");
        }
        green();
        printf("\t\t\t    _______\n");
        printf("\t\t\t   /\" o o o\" \n");
        printf("\t\t\t  /o \" o o o\"_______\n");
        printf("\t\t\t <    >------>   o /|\n");
        printf("\t\t\t  \" o/  o   /_____/o|\n");
        printf("\t\t\t   \"/______/      |o|\n");
        printf("\t\t\t          |   o   |o/\n");
        printf("\t\t\t          |_______|/\n");
        ver = ver + speed;
        Sleep(50);
        reset();
    }

//Display names of the developers
    sleep(1);
    yellow();
    Beep(800,200);
    printf("\t\t\t\t\t\t\t  Developers\n\n");
    reset();

    cyan();
    printf("\t\t\t\t\t\t\t\tJohn Ivan Galang\n");
    printf("\t\t\t\t\t\t\t\tPatricia Mahinay\n");
    printf("\t\t\t\t\t\t\t\tEloisa Decio\n");
    reset();

  sleep(2);
  cyan();
  system("cls");

  red();
  printf("\nNote: ");
  reset();

  cyan();
  printf("Get 7 on the first roll and win, get 11 or 2 and you lose.");
  reset();
  cyan();
  printf("\n\nLoading");
  for(int loding = 1; loding <=3; loding++){
        Sleep(2000);
        printf(".");
    
    }
  reset();

//Play or Exit part  
    char choice;
    
    system("cls");
    yellow();
    printf("\n\n[P]");
    reset();
    cyan();
    printf(" Play\n");
    reset();
    yellow();
    printf("[R]");
    reset();
    cyan();
    printf(" Rules\n");
    reset();
    yellow();
    printf("[E]");
    reset();
    cyan();
    printf(" Exit\n");
    printf("\n\nEnter: ");
    scanf("%c", &choice);

    system("cls");
    reset();

    if(choice == 'P' || choice == 'p'){
        play();
        }

    else if(choice == 'E' || choice == 'e'){
        exit(0);
        }

    else if(choice == 'R' || choice == 'r'){
        rules();
    }

    else{
        exit(0);
    }
}

