#include <stdio.h>

void cycle(int *x, int *y, int *z);

int main(void)
{
    int a, b, c;

    printf("Enter 3 numbers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("\n");

    cycle(&a, &b, &c);
    printf("%d %d %d", a, b, c);

    return 0;
}

void cycle(int *x, int *y, int *z)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = *z;
    *z = tmp;
}
