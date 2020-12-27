#include <stdio.h>

int main(void)
{
    int money = 100, option;
    while (money > 0)
    {
        printf("You have $%d. Here are our CDs.\n", money);
        printf("1. $10 - Hello\n");
        printf("2. $20 - Sugar\n");
        printf("3. $50 - See you again\n");
        scanf("%d", &option);

        if (option == 1 && money >= 10)
            money -= 10;
        else if (option == 2 && money >= 20)
            money -= 20;
        else if (option == 3 && money >= 50)
            money -= 50;
        else
            printf("Try again!\n");

        printf("\n");
    }
}
