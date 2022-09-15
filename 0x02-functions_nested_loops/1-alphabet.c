#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return;
}
