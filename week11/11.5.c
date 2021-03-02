#include <stdio.h>

void cycle1(int *x, int *y, int *z);
void cycle2(int **x, int **y, int **z);

int main(void) {
	int x, y, z, option;
	printf("Enter 3 numbers:\n");
	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%d", &y);
	printf("z = ");
	scanf("%d", &z);
	printf("\n");
	int *p = &x, *q = &y, *r = &z;

	printf("1. Print with labels the values of x, y, z, p, q, r, *p, *q, *r\n");
	printf("2. Rotate values of x, y, z. Print with labels the values of x, y, z, p, q, r, *p, *q, *r\n");
	printf("3. Rotate values of p, q, r. Print with labels the values of x, y, z, p, q, r, *p, *q, *r\n");
	printf("\n");

	printf("x = %d, y = %d, z = %d\n", x, y, z);
	printf("p = %x, q = %x, r = %x\n", p, q, r);
	printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);
	printf("\n");

	cycle1(&x, &y, &z);
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	printf("p = %x, q = %x, r = %x\n", p, q, r);
	printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);
	printf("\n");

	cycle2(&p, &q, &r);
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	printf("p = %x, q = %x, r = %x\n", p, q, r);
	printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

	return 0;
}

void cycle1(int *x, int *y, int *z) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = *z;
	*z = tmp;
}

void cycle2(int **x, int **y, int **z) {
	int *tmp;
	tmp = *x;
	*x = *y;
	*y = *z;
	*z = tmp;
}