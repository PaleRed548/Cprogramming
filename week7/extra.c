#include <stdio.h>

int main(void)
{
	int h;
	printf("Enter height: ");
	scanf("%d", &h);
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= (h + h - 1 - i - (i - 1)) / 2; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
