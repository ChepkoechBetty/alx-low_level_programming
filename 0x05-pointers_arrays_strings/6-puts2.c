#include <stdio.h>
#include "main.h"
/**
 * puts2 - print characters
 *
 * @str: parameter
 */
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
