#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
    int secret, guess, attempts = 0;
    srand(time(NULL)); // Seed random number generator
    secret = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret)
            printf("Too low! Try again.\n");
        else if (guess > secret)
            printf("Too high! Try again.\n");
        else
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);

    } while (guess != secret);
}

int main() {
    char choice;
    do {
        playGame();
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}