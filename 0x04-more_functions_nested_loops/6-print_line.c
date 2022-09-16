#include <stdio.h>
/**
 * print_line - print line
 * @n:Parameter
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
