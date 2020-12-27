#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter an age: ");
    scanf("%d", &age);
    if (age > 0)
    {
        if (age < 18)
            printf("A child\n");
        else if (age >= 65)
            printf("A senior citizen\n");
        else
            printf("An adult\n");
    }
    else
        printf("That's not a valid age");
    return 0;
}
