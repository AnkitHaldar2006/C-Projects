#include <stdio.h>

int main() {
    int arr[100], size, i, pos = -1, element;

    // Input
    printf("Enter Size of an Array: ");
    scanf("%d", &size);

    printf("Enter %d numbers:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter an Element to search: ");
    scanf("%d", &element);

    // Search
    for(i = 0; i < size; i++) {
        if(arr[i] == element) {
            pos = i;
            break;
        }
    }

    // Output
    if(pos != -1) {
        printf("Element %d found at position %d (index %d)\n", element, pos + 1, pos);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}

