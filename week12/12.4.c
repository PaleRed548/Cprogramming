#include <stdio.h>

void sub_array(int *a, int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sub_array(a, n);
    return 0;
}

void sub_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                printf("%d ", a[i + k]);
            }
            printf("\n");
        }
    }
}
