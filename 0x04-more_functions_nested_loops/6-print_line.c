#include <stdio.h>
/**
 * print_line - print line
 */
void print_line(int n)
{
	for (int i = 1; i <= n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
