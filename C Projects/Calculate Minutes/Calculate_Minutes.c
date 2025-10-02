#include<stdio.h>
int main()
{
    int hours, minutes, total_minutes;
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    total_minutes = (hours * 60) + minutes;
    printf("Total minutes: %d\n", total_minutes);
    return 0;
}