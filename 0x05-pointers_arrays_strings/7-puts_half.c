#include "main.h"
#include <string.h>
/**
 * puts_half - print half of characters
 *
 * @str: Parameter
 *
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		int ii;

		ii = (len / 2) + 1;
		for (i = ii; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}


}
