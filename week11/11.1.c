#include <stdio.h>

int main(void)
{
    int *p;
    int a, b, c;

    printf("Enter 3 numbers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("\n");

    p = &a;
    printf("p = &a => *p = %d\n", *p);
    p = &b;
    printf("p = &b => *p = %d\n", *p);
    p = &c;
    printf("p = &c => *p = %d\n", *p);

    return 0;
}
