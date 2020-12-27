#include <stdio.h>

int main(void)
{
    char day[3];
    int overnight, three_day, weekly;

    printf("What day is today?\n");
    scanf(" %2s", &day);
    printf("\n");
    printf("Overnight = ");
    scanf("%d", &overnight);
    printf("Three-day = ");
    scanf("%d", &three_day);
    printf("Weekly = ");
    scanf("%d", &weekly);
    printf("\n");
    printf("Your total cost is %d", overnight * 7 + three_day * 5 + weekly * 3);
    return 0;
}
