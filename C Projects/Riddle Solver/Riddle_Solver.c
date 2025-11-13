#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_RIDDLES 5
#define MAX_LEN 100

// Convert string to lowercase
void toLower(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

// Riddle structure
typedef struct {
    char question[MAX_LEN];
    char answer[MAX_LEN];
} Riddle;

// Sample riddles
void loadRiddles(Riddle riddles[]) {
    strcpy(riddles[0].question, "What has keys but can't open locks?");
    strcpy(riddles[0].answer, "keyboard");

    strcpy(riddles[1].question, "What has hands but can’t clap?");
    strcpy(riddles[1].answer, "clock");

    strcpy(riddles[2].question, "What can travel around the world while staying in the same corner?");
    strcpy(riddles[2].answer, "stamp");

    strcpy(riddles[3].question, "What gets wetter the more it dries?");
    strcpy(riddles[3].answer, "towel");

    strcpy(riddles[4].question, "What has a heart that doesn’t beat?");
    strcpy(riddles[4].answer, "artichoke");
}

// Play riddles
void playRiddles(Riddle riddles[], int count) {
    char userAnswer[MAX_LEN];
    int score = 0;

    for (int i = 0; i < count; i++) {
        printf("\nRiddle %d: %s\nYour answer: ", i + 1, riddles[i].question);
        fgets(userAnswer, MAX_LEN, stdin);
        userAnswer[strcspn(userAnswer, "\n")] = '\0'; // Remove newline
        toLower(userAnswer);

        char correctAnswer[MAX_LEN];
        strcpy(correctAnswer, riddles[i].answer);
        toLower(correctAnswer);

        if (strcmp(userAnswer, correctAnswer) == 0) {
            printf("  Correct!\n");
            score++;
        } else {
            printf("  Wrong. The correct answer was: %s\n", riddles[i].answer);
        }
    }

    printf("\n  You solved %d out of %d riddles!\n", score, count);
}

// Main menu
int main() {
    Riddle riddles[MAX_RIDDLES];
    loadRiddles(riddles);

    int choice;
    do {
        printf("\n--- Riddle Solver Menu ---\n");
        printf("1. Play Riddles\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        switch (choice) {
            case 1:
                playRiddles(riddles, MAX_RIDDLES);
                break;
            case 2:
                printf("  Goodbye!\n");
                break;
            default:
                printf("  Invalid choice. Try again.\n");
        }
    } while (choice != 2);

    return 0;
}