#include <stdio.h>

float calculateCost(float duration, float rate);
float calculateTotalRevenue(float durations[], int size, float rate);
float findMaxDuration(float durations[], int size);
float findMinDuration(float durations[], int size);
float calculateCost(float duration, float rate) {
    return duration * rate;
}

float calculateTotalRevenue(float durations[], int size, float rate) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += calculateCost(durations[i], rate);
    }
    return total;
}

float findMaxDuration(float durations[], int size) {
    float max = durations[0];
    for (int i = 1; i < size; i++) {
        if (durations[i] > max) max = durations[i];
    }
    return max;
}

float findMinDuration(float durations[], int size) {
    float min = durations[0];
    for (int i = 1; i < size; i++) {
        if (durations[i] < min) min = durations[i];
    }
    return min;
}
int main() {
    int n;
    float rate;

    printf("Enter number of calls: ");
    scanf("%d", &n);

    float durations[n];
    printf("Enter rate per minute: ");
    scanf("%f", &rate);

    for (int i = 0; i < n; i++) {
        printf("Enter duration of call %d (in minutes): ", i + 1);
        scanf("%f", &durations[i]);
    }

    printf("\nTotal Revenue: ₹%.2f\n", calculateTotalRevenue(durations, n, rate));
    printf("Longest Call: %.2f minutes\n", findMaxDuration(durations, n));
    printf("Shortest Call: %.2f minutes\n", findMinDuration(durations, n));

    return 0;
}