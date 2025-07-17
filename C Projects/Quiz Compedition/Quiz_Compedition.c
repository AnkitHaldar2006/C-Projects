#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf(" Welcome to the Quiz Game\n");
    printf("Enter your Answer (A/B/C/D) For Each Question.\n");

    // Question 1
    printf("1. What is the Capital Of India?\n");
    printf("A. Delhi\nB. Mumbai\nC. Kolkata\nD. Chennai\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score++;
        printf(" Correct!\n");
    } else {
        printf(" Wrong! The correct answer is A. Delhi\n");
    }

    // Question 2
    printf("2. Who is the founder of Microsoft?\n");
    printf("A. Elon Musk\nB. Bill Gates\nC. Steve Jobs\nD. Mark Zuckerberg\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score++;
        printf(" Correct!\n\n");
    } else {
        printf(" Wrong! The correct answer is B. Bill Gates\n");
    }

    // Question 3
    printf("3. What is the value of 5*5+2?\n");
    printf("A. 20\nB. 30\nC. 27\nD. 25\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        score++;
        printf(" Correct!\n\n");
    } else {
        printf(" Wrong! The correct answer is C. 27\n");
    }

    // Question 4
    printf("4. Who is the CEO of Google?\n");
    printf("A. Sundar Bose\nB. Sundar Roy\nC. Sudar Lal\nD. Sundar Pichai\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'D' || answer == 'd') {
        score++;
        printf(" Correct!\n");
    } else {
        printf(" Wrong! The correct answer is D. Sundar Pichai\n");
    }

    // Question 5
    printf("5. Which is the largest ocean?\n");
    printf("A. Pacific\nB. Indian\nC. Arctic\nD. Atlantic\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score++;
        printf(" Correct!\n");
    } else {
        printf(" Wrong! The correct answer is A. Pacific\n");
    }

    // Question 6
    printf("6. Which planet is known as the Red Planet?\n");
    printf("A. Earth\nB. Mars\nC. Jupiter\nD. Pluto\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score++;
        printf(" Correct!\n");
    } else {
        printf(" Wrong! The correct answer is B. Mars\n");
    }

    // Question 7
    printf("7. Which is the latest model of Samsung S Series?\n");
    printf("A. Galaxy S23\nB. Galaxy S25+\nC. Galaxy S25\nD. Galaxy S21\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        score++;
        printf(" Correct!\n");
    } else {
        printf(" Wrong! The correct answer is C. Galaxy S25\n");
    }

    // Question 8
    printf("8. Which country invented UPI payment?\n");
    printf("A. Australia\nB. Brazil\nC. Canada\nD. India\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'D' || answer == 'd') {
        score++;
        printf(" Correct!\n");
    } else {
        printf(" Wrong! The correct answer is D. India\n");
    }

    // Question 9
    printf("9. How many times has Brazil won the FIFA World Cup?\n");
    printf("A. 5\nB. 3\nC. 6\nD. 4\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score++;
        printf(" Correct!\n");
    } else {
        printf(" Wrong! The correct answer is A. 5\n");
    }

    // Question 10
    printf("10. Which year did Mohun Bagan win the first Shield?\n");
    printf("A. July 22, 1912\nB. June 29, 1911\nC. October 10, 1908\nD. January 12, 1910\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score++;
        printf(" Correct!\n");
    } else {
        printf(" Wrong! The correct answer is B. June 29, 1911\n");
    }

    // Final Result
    printf(" You scored %d out of 10!\n", score);

    if (score == 10) {
        printf(" Excellent!\n");
    } else if (score >= 5) {
        printf(" Good Job!\n");
    } else {
        printf(" Better luck next time.\n");
    }

    return 0;
}
