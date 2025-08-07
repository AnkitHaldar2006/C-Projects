#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE];
    int i, input;

    printf("Enter up to %d elements:\n", SIZE);
    for(i = 0; i < SIZE; i++) {
        printf("Element %d: ", i);
        if(scanf("%d", &input) == 1) {
            arr[i] = input;
        } else {
            printf("Invalid input. Stopping.\n");
            break;
        }
    }

    printf("\nStored elements:\n");
    for(int j = 0; j < i; j++) {
        printf("arr[%d] = %d\n", j, arr[j]);
    }

    return 0;
}
