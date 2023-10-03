#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Check for digit
 * @c:Parameter
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
