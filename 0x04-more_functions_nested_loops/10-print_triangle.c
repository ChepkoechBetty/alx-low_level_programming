#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print triangle
 * @size:parameter
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int j;

		for (x = 1; x <= size; ++x)
		{
			for (j = 1; j <= x; ++j)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
}
