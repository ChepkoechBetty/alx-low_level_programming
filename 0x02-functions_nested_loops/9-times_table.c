#include <stdio.h>
/**
 * times_table - print 9-times table
 *
 * Return: 0
 */
void times_table(void)
{
	int start;
	int m;
	int r;

	for (start = 0; start <= 9; start++)
	{
		for (m = 0; m <= 9; m++)
		{
			r = start * m;
			write(1, r, 1);
		}
	}
}
