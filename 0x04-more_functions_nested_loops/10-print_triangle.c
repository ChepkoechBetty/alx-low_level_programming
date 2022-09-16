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
		int x = 1;

		while (x <= size)
		{
			_putchar('#');
		}
	}
}
