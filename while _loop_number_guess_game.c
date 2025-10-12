//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:8/10/2025
Description:while_loop_number_guess_game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    
    srand(time(0));
    secretNumber = (rand() % 20) + 1;

    printf("Guess the secret number between 1 and 20:\n");

    
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } 
        else if (guess < secretNumber) {
            printf("Too low!\n");
        } 
        else {
            printf("Congratulations! You guessed it!\n");
            break;  
        }
    }

    printf("You took %d attempts.\n", attempts);

    return 0;
}