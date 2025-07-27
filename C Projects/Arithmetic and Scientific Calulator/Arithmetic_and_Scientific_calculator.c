#include <stdio.h>
#include <math.h> // Required for scientific functions

int main() {
    int option, sci_option;
    float n1, n2, result;
    char op;

    do {
        printf("\nSelect option");
        printf("\n1. Arithmetic\n2. Scientific\n3. Exit\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter first number operator, and second number: "); 
                scanf("%f %c %f", &n1, &op, &n2);

                switch (op) {
                    case '+':
                        result = n1 + n2;
                        printf("Result: %.2f + %.2f = %.2f\n", n1, n2, result);
                        break;
                    case '-':
                        result = n1 - n2;
                        printf("Result: %.2f - %.2f = %.2f\n", n1, n2, result);
                        break;
                    case '*':
                        result = n1 * n2;
                        printf("Result: %.2f * %.2f = %.2f\n", n1, n2, result);
                        break;
                    case '/':
                        if (n2 != 0) {
                            result = n1 / n2;
                            printf("Result: %.2f / %.2f = %.2f\n", n1, n2, result);
                        } else {
                            printf("Error: Division by zero!\n");
                        }
                        break;
                    default:
                        printf("Error: Invalid operator\n");
                }
                break;

            case 2:
                printf("\nScientific Operations:");
                printf("\n1. Power (x^y)");
                printf("\n2. Square (x^2)");
                printf("\n3. Square Root (vx)");
                printf("\n4. Logarithm (log base e)\n");
                printf("Choose operation: ");
                scanf("%d", &sci_option);

                switch (sci_option) {
                    case 1:
                        printf("Enter base and exponent: ");
                        scanf("%f %f", &n1, &n2);
                        result = pow(n1, n2);
                        printf("Result: %.2f ^ %.2f = %.2f\n", n1, n2, result);
                        break;
                    case 2:
                        printf("Enter number: ");
                        scanf("%f", &n1);
                        result = n1 * n1;
                        printf("Result: %.2f ^ 2 = %.2f\n", n1, result);
                        break;
                    case 3:
                        printf("Enter number: ");
                        scanf("%f", &n1);
                        if (n1 >= 0) {
                            result = sqrt(n1);
                            printf("Result: %.2f = %.2f\n", n1, result);
                        } else {
                            printf("Error: Cannot compute square root of negative number!\n");
                        }
                        break;
                    case 4:
                        printf("Enter number: ");
                        scanf("%f", &n1);
                        if (n1 > 0) {
                            result = log(n1);
                            printf("Result: log(%.2f) = %.2f\n", n1, result);
                        } else {
                            printf("Error: Logarithm undefined for non-positive numbers!\n");
                        }
                        break;
                    default:
                        printf("Invalid scientific operation choice.\n");
                }
                break;

            case 3:
                printf("Exiting calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (option != 3);

    return 0;
}
