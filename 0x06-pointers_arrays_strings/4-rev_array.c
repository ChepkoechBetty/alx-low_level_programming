#include "main.h"
/**
 * reverse_array - reverse array
 * @a: parameter
 * @n: parameter
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0, last;

	last = n - 1;

	while (i < last)
	{
		temp = *(a + i);

		*(a + i) = *(a + last);

		*(a + last) = temp;

		i++;

		last--;

	}
}
