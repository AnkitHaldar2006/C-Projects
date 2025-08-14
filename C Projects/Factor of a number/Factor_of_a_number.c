#include <stdio.h>
int main()
{
    int n, i;

    // Printing Number
    printf("enter a number: ");
    scanf("%d", &n);

    // print
    printf("The factor is no %d");

    for (i = 0; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            printf("%d", i);
        }
    }
    return 0;
}