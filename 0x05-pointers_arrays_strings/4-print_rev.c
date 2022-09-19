#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse a string
 *
 * @s:parameter
 */
void print_rev(char *s)
{
	char *r;

	*r = strrev(s);
	puts(r);
}
