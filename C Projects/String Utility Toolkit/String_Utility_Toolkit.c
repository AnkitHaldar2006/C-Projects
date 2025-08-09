#include <stdio.h>
#include <ctype.h>
#include <string.h>

void reverse(char str[])
{
    int i, len = strlen(str);
    printf("Reversed: ");
    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

void toggle(char str[])
{
    int i;
    printf("Toggled Case: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
            printf("%c", tolower(str[i]));
        else if (islower(str[i]))
            printf("%c", toupper(str[i]));
        else
            printf("%c", str[i]);
    }
    printf("\n");
}

void capitalize(char str[])
{
    int i;
    printf("Capitalized Words: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
            printf("%c", toupper(str[i]));
        else
            printf("%c", tolower(str[i]));
    }
    printf("\n");
}

void removeSpecial(char str[])
{
    int i;
    printf("Without Special Characters: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalnum(str[i]) || str[i] == ' ')
            printf("%c", str[i]);
    }
    printf("\n");
}

void countVC(char str[])
{
    int i, v = 0, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", v, c);
}

int main()
{
    char str[200];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    do
    {
        printf("\n--- String Toolkit Menu ---\n");
        printf("1. Reverse\n");
        printf("2. Toggle Case\n");
        printf("3. Capitalize Words\n");
        printf("4. Remove Special Characters\n");
        printf("5. Count Vowels & Consonants\n");
        printf("6. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);
        getchar(); // Clear buffer

        switch (choice)
        {
        case 1:
            reverse(str);
            break;
        case 2:
            toggle(str);
            break;
        case 3:
            capitalize(str);
            break;
        case 4:
            removeSpecial(str);
            break;
        case 5:
            countVC(str);
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}