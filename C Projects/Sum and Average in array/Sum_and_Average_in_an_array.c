#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    float avg = (float)sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
