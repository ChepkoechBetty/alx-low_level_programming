#include <stdio.h>
/**
 * print_diagonal - print diagonal line
 * @n:Parameter
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			putchar('\\');
			putchar('\n');
		}
	}
}
