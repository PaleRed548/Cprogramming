#include <stdio.h>

int main(void)
{
    float *p;
    float a, b, c;

    printf("Enter 3 numbers:\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    printf("\n");

    p = &a;
    *p += 100;
    printf("a = %f\n", *p);
    p = &b;
    *p += 100;
    printf("b = %f\n", *p);
    p = &c;
    *p += 100;
    printf("c = %f\n", *p);
}

