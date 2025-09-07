#include <stdio.h>
int main (){
int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k;

    printf("Enter First Matrix numbers:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter Second Matrix numbers:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialize the result matrix to zero
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat3[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}