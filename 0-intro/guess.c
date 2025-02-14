//
// Created by xzc on 2025/2/14.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void) {
    /*
     * 1. Display the game rule
     */
    const int max = 100;
    int tries = 7;
    printf("The computer will generate a secret number between 1 and %d.\n"
           "You have %d chances to guess it.\n",
           max, tries);

     /*
      * 2. generate a secret number
      */
    srand(time(NULL)); // use current time as seed for random generator
    const int secret = rand() % max + 1;

    while (tries > 0) {
        /*
     * 3. ask the player to enter a number
     */
        printf("Please enter a number:");

        /*
         * 4. receive the guessed number
         */
        int guess = 0;
        scanf("%d", &guess);

        /*
         * 5. compare the guessed number with the secret number
         * and inform the player of the result
         */
        if (guess == secret) {
            printf("You win!\n");
            break;
        } else if (guess > secret){
            printf("guess > secret\n");
        } else {
            printf("guess < secret\n");
        }
        tries--;
        if (tries == 0) {
            printf("You lose! The secret number was %d.\n", secret);
        }
        /*
         * loop: repeat until the player wins or loses
         */
    }
    return 0;
}