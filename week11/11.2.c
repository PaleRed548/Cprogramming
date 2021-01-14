#include <stdio.h>

int main(void)
{
    int a[7]= {13, -355, 235, 47, 67, 943, 1222};
    for (int i = 0; i < 7; i++)
    {
        printf("%d. %p\n", i + 1, &a[i]);
    }
    return 0;
}

