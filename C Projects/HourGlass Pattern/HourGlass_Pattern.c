#include <stdio.h>

int main() {
    int n = 7; // Must be odd for symmetry

    // Upper half
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j < n - 2 * i; j++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for (int i = n / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j < n - 2 * i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
