#include <stdio.h>

void incomeplus(int *current, int year);

int main(void)
{
    int current, year;
    printf("Enter the current salary: ");
    scanf("%d", &current);
    printf("Enter the number of working years: ");
    scanf("%d", &year);
    incomeplus(&current, year);
    printf("The new salary: %d\n", current);
    return 0;
}

void incomeplus(int *current, int year)
{
    if (year > 3)
        *current *= 1.25;
}
