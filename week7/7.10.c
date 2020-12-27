#include <stdio.h>

void perfect(int n);

int main(void)
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		perfect(i);
	}
}

void perfect(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if ((n % i) == 0)
			sum += i;
	}
	if (sum == n)
		printf("%d\n", n);
}

