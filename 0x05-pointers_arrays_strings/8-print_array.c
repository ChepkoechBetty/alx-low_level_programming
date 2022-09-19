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
		printf("%d,\n", a[i]);
	}
}
