#include <stdio.h>
/**
 * more_numbers - more numbers
 */
void more_numbers(void)
{
	int i = 1, j;

	while (i < '10')
	{
		j = 0;
		while (j <= '14')
		{
			putchar(j);
		}
		putchar('\n');
	}
	putchar('\n');
}
