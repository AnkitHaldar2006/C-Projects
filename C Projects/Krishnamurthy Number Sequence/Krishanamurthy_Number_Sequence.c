#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num) {
        printf("%d is a Krishnamurthy Number.\n", num);
    } else {
        printf("%d is NOT a Krishnamurthy Number.\n", num);
    }

    return 0;
}
