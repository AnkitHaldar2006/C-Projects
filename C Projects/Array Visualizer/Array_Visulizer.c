#include <stdio.h>

void visualizeArray(int arr[], int n);

int main() {
    int arr[] = {3, 1, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array Visualization:\n");
    visualizeArray(arr, n);

    return 0;
}

void visualizeArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%2d | ", arr[i]);
        for(int j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}
