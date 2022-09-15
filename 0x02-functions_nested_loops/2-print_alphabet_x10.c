#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet x10
 *
 */
void print_alphabet_x10(void)
{
	int c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
