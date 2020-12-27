#include <stdio.h>

int main(void)
{
    double km;
    printf("Enter the distance in kilometers: ");
    scanf("%lf", & km);
    printf("That equals %.2f miles.\n", km * 0.62);
    return 0;
}
