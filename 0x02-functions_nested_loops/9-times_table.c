#include <stdio.h>
#include <unistd.h>
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
			if (start == m)
			{
				printf("%d", r);
			}
			else
			{
				printf("%d, ", r);
			}
		}
		printf("\n");
	}
}
