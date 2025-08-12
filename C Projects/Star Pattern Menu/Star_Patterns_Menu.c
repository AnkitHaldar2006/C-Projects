#include <stdio.h>

// Function prototypes
void printSquare(int n);
void printRightTriangle(int n);
void printInvertedTriangle(int n);
void printPyramid(int n);
void printDiamond(int n);
void printAllPatterns(int n);

int main()
{
    int choice, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    do
    {
        printf("\n    Star Pattern Menu    \n");
        printf("1. Square Pattern\n");
        printf("2. Right Triangle\n");
        printf("3. Inverted Triangle\n");
        printf("4. Pyramid\n");
        printf("5. Diamond\n");
        printf("6. Print All Patterns\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printSquare(n);
            break;
        case 2:
            printRightTriangle(n);
            break;
        case 3:
            printInvertedTriangle(n);
            break;
        case 4:
            printPyramid(n);
            break;
        case 5:
            printDiamond(n);
            break;
        case 6:
            printAllPatterns(n);
            break;
        case 0:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}

// Square Pattern
void printSquare(int n)
{
    int i, j;
    printf("\nSquare Pattern:\n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            printf("* ");
        printf("\n");
    }
}

// Right Triangle
void printRightTriangle(int n)
{
    int i, j;
    printf("\nRight Triangle:\n");
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= i; ++j)
            printf("* ");
        printf("\n");
    }
}

// Inverted Triangle
void printInvertedTriangle(int n)
{
    int i, j;
    printf("\nInverted Triangle:\n");
    for (i = n; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
            printf("* ");
        printf("\n");
    }
}

// Pyramid
void printPyramid(int n)
{
    int i, j, k;
    printf("\nPyramid:\n");
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= n - i; ++j)
            printf("  ");
        for (k = 1; k <= 2 * i - 1; ++k)
            printf("* ");
        printf("\n");
    }
}

// Diamond
void printDiamond(int n)
{
    int i, j, k;
    printf("\nDiamond:\n");
    // Upper half
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= n - i; ++j)
            printf("  ");
        for (k = 1; k <= 2 * i - 1; ++k)
            printf("* ");
        printf("\n");
    }
    // Lower half
    for (i = n - 1; i >= 1; --i)
    {
        for (j = 1; j <= n - i; ++j)
            printf("  ");
        for (k = 1; k <= 2 * i - 1; ++k)
            printf("* ");
        printf("\n");
    }
}

// Print All Patterns
void printAllPatterns(int n)
{
    printSquare(n);
    printRightTriangle(n);
    printInvertedTriangle(n);
    printPyramid(n);
    printDiamond(n);
}