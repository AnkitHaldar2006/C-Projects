#include <stdio.h>

int main() {
    int matrix[2][3]; // 2 rows, 3 columns
    int i, j;

    printf("Enter 6 elements (2x3 matrix):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
