#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - Check uppercase
 * @c:Parameter
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
