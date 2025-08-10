#include <stdio.h>

int main()
{
    char name[50];
    int classNum;
    int marks[5];
    int total = 0;
    float average;
    char grade;

    // Input student name
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    // Input class
    printf("Enter student class: ");
    scanf("%d", &classNum);

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i]; // Calculate total directly
    }

    // Calculate average
    average = total / 5.0;

    // Determine grade
    if (average > 80)
        grade = 'A';
    else if (average >= 50)
        grade = 'B';
    else if (average >= 30)
        grade = 'C';
    else
        grade = 'D';

    // Output result
    printf("\n--- Student Report ---\n");
    printf("Name   : %s", name); // fgets includes newline
    printf("Class  : %d\n", classNum);
    printf("Total  : %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade  : %c\n", grade);

    return 0;
}