#include <stdio.h>

int main(void)
{
    int choice1, choice2;
    printf("Choose a season:\n");
    printf("1. Spring\n");
    printf("2. Summer\n");
    printf("3. Fall\n");
    printf("4. Winter\n");
    printf("Enter your number: ");
    scanf("%d", &choice1);

    if (choice1 == 1)
    {
        printf("\nChoose an activity:\n");
        printf("1. Go swimming\n");
        printf("2. Go camping\n");
        printf("Enter your number: ");
        scanf("%d", &choice2);
        if (choice2 == 1)
            printf("\nBikini\n");
        else
            printf("\nNo suggestions\n");
    }

    else if (choice1 == 4)
    {
        printf("\nChoose an activity:\n");
        printf("1. Go skiing\n");
        printf("2. Go to bed\n");
        printf("Enter your number: ");
        scanf("%d", &choice2);
        if (choice2 == 1)
            printf("\nCoat\n");
        else
            printf("\nNo suggestions\n");
    }

    else
    {
        printf("\nThe option is currently unavailable\n");
    }
}
