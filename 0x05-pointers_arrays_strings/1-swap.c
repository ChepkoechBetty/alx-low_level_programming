/**
 * swap_int - Swap values of two pointers
 *
 * @a:Parameter 1
 *
 * @b:Parameter 2
 *
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = *a;
	b = *b;
	*a = b;
	*b = a;
}

