#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse a string
 *
 * @s:parameter
 */
void print_rev(char *s)
{
	int i, len;
	char *rev;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		rev = strcat(rev, s[i]);
	}
	printf(rev);
}
