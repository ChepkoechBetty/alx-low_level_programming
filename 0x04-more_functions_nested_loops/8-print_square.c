#include <stdio.h>
#include "main.h"
/**
 * print_square - print square
 * @size:the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= size)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
