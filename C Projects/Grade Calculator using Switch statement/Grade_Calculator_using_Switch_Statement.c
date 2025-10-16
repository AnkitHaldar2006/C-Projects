#include <stdio.h>

int main() {
    int subjects, i;
    float marks, total = 0, percentage;
    int gradeBracket;
    char grade;

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for (i = 1; i <= subjects; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);
        total += marks;
    }

    percentage = total / subjects;
    gradeBracket = (int)(percentage / 10);  // Convert to grade bracket

    switch (gradeBracket) {
        case 10: // For 100%
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    printf("\nTotal Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}