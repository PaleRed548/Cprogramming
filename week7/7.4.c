#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("2\n");
	int flag = 1;
	for (int i = 3; i < 100; i++, flag = 1)
	{
		for (int j = 2, r = sqrt(i); j <= r; j++)
		{
			if ((i % j) == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d\n", i);
	}
}
