#include <stdio.h>

int main(void)
{
	int n, f = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("Invalid n!\n");
		return 1;
	}
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	printf("%d! = %d\n", n, f);
	return 0;
}
