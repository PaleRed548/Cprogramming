#include <stdio.h>

int main(void)
{
    char c1, c2, c3;
    char min;
    printf("Enter three letters (all uppercase or all lowercase): ");
    scanf("%c%c%c", &c1, &c2, &c3);
    min = c1;
    if (min > c2)
        min = c2;
    if (min > c3)
        min = c3;
    printf("%c is the first letter alphabetically.\n", min);
    return 0;
}
