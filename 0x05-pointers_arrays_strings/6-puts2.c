#include <stdio.h>
#include <string.h>
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
		if (i % 2 == 0)
			_putchar(str[i]);
		continue;
	}
	_putchar('\n');
}
