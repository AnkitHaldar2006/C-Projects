#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    const char correctPassword[] = "open123"; // You can change this

    do {
        printf("Enter the password: ");
        scanf("%s", password);
        
        if (strcmp(password, correctPassword) != 0) {
            printf("Incorrect password! Try again.\n\n");
        }

    } while (strcmp(password, correctPassword) != 0);

    printf("\nAccess granted!  \n");

    return 0;
}