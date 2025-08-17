#include <stdio.h>

int main() {
    int arr[100], arr2[100], arr3[100];
    int size, i, j = 0, k = 0;

    // Input
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    printf("Enter the numbers:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Separation
    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            arr2[j] = arr[i];
            j++;
        } else {
            arr3[k] = arr[i];
            k++;
        }
    }

    // Output
    printf("Even numbers:\n");
    for(i = 0; i < j; i++) {
        printf("%d\n", arr2[i]);
    }

    printf("Odd numbers:\n");
    for(i = 0; i < k; i++) {
        printf("%d\n", arr3[i]);
    }

    return 0;
}