#include <stdio.h>
/**
 * print_square - print square
 * @size:the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	for (int i = 1; i <= size; i++)
	{
		putchar('#');
	}
	putchar('\n');
}
