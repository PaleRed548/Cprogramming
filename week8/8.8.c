#include <stdio.h>

int main(void)
{
    int n, product = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("n! = %d\n", product);
}
