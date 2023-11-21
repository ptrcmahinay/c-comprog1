// password checker
// uses while loop and if-else statements


#include <stdio.h>

int main(){
    int correctPassword, password, tries;
    // setting the tries 
    tries = 3;

    // setting the password
    correctPassword = 143;
    // uses while loop to allow password attempts of 3
    while(correctPassword != password && tries > 0){
        printf("Enter password: ");
        scanf("%d", &password);

        // check if entered password is correct
        if(password == correctPassword){
            printf("\nCorrect password!");

        } else{
            printf("Incorrect password \n");
            printf("Try again!\n");
            tries--;
        }
    }
    printf("\nSorry you've used all your chances :(");

    return 0;
}