#include <stdio.h>
/**
 * print_array - print array elements
 *
 * @a: array name
 *
 * @n: number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		continue;
		printf("%d,", a[i]);
	}
	printf("\n");
}
