#include <stdio.h>

int main(void)
{
    int a;
    double b;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a double: ");
    scanf("%lf", &b);
    printf("\nYour integer is %d and your double is %lf\n", a, b);
    return 0;
}
